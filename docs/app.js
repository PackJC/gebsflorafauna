// Geb's Flora & Fauna: project site. Everything below renders from window.GFF (data.js), which
// gebsflorafauna_work/site/build_site_data.py generates from the mod's own data.
(() => {
  "use strict";
  const D = window.GFF;
  const $ = (s, r = document) => r.querySelector(s);
  const $$ = (s, r = document) => [...r.querySelectorAll(s)];
  document.documentElement.classList.add("js");

  function h(tag, attrs = {}, ...kids) {
    const el = document.createElement(tag);
    for (const [k, v] of Object.entries(attrs)) {
      if (v == null || v === false) continue;
      if (k === "class") el.className = v;
      else if (k === "text") el.textContent = v;
      else if (k.startsWith("on")) el.addEventListener(k.slice(2), v);
      else el.setAttribute(k, v === true ? "" : v);
    }
    for (const kid of kids.flat()) if (kid != null && kid !== false) el.append(kid);
    return el;
  }

  const WORDS = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
    "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"];
  const TENS = ["", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"];
  const words = n => n < 20 ? WORDS[n] : TENS[Math.floor(n / 10)] + (n % 10 ? "-" + WORDS[n % 10] : "");
  const cap = s => s.charAt(0).toUpperCase() + s.slice(1);

  // ---- stats and counts in the copy
  if (D) {
    $$("[data-stat]").forEach(el => { const v = D.stats[el.dataset.stat]; if (v != null) el.textContent = v; });
    const h2 = $("#mushrooms h2");
    if (h2) h2.firstChild.textContent = cap(words(D.stats.fungi)) + " fungi.";
  }

  // ---- copy + toast
  const toast = $("#toast");
  let toastTimer;
  async function copy(text, label = "Copied") {
    try { await navigator.clipboard.writeText(text); }
    catch {
      const t = h("textarea", { style: "position:fixed;opacity:0" }); t.value = text;
      document.body.append(t); t.select(); document.execCommand("copy"); t.remove();
    }
    toast.textContent = label;
    toast.classList.add("show");
    clearTimeout(toastTimer);
    toastTimer = setTimeout(() => toast.classList.remove("show"), 1500);
  }
  document.addEventListener("click", e => {
    const b = e.target.closest("[data-copy]");
    if (b) copy($("#" + b.dataset.copy).textContent, "Copied to clipboard");
  });

  // ---- navigation
  const menu = $("#menu"), links = $("#nav-links");
  menu.addEventListener("click", () => {
    const open = links.classList.toggle("open");
    menu.setAttribute("aria-expanded", String(open));
  });
  $$("a", links).forEach(a => a.addEventListener("click", () => {
    links.classList.remove("open"); menu.setAttribute("aria-expanded", "false");
  }));
  const navMap = new Map($$("a", links).map(a => [a.getAttribute("href").slice(1), a]));
  const spy = new IntersectionObserver(entries => {
    for (const en of entries) {
      if (!en.isIntersecting) continue;
      navMap.forEach(a => a.classList.remove("active"));
      const a = navMap.get(en.target.id);
      if (a) a.classList.add("active");
    }
  }, { rootMargin: "-45% 0px -50% 0px" });
  navMap.forEach((_, id) => { const s = document.getElementById(id); if (s) spy.observe(s); });

  // ---- reveal on scroll
  const reveal = new IntersectionObserver(entries => {
    for (const en of entries) if (en.isIntersecting) { en.target.classList.add("in"); reveal.unobserve(en.target); }
  }, { rootMargin: "0px 0px -8% 0px" });
  const watch = root => $$(".reveal:not(.in)", root).forEach(el => reveal.observe(el));
  watch(document);

  if (!D) return;

  // ---- detail sheet
  const sheet = $("#sheet"), body = $("#sheet-body");
  function openSheet(content) {
    body.replaceChildren(...content);
    if (typeof sheet.showModal === "function") sheet.showModal(); else sheet.setAttribute("open", "");
    sheet.scrollTop = 0;
  }
  $("#sheet-close").addEventListener("click", () => sheet.close());
  sheet.addEventListener("click", e => { if (e.target === sheet) sheet.close(); });
  const clsButton = cls => h("button", { class: "cls", type: "button", title: "Copy classname", onclick: () => copy(cls, cls + " copied") }, cls);
  const img = (src, alt, extra = {}) => h("img", { src, alt, loading: "lazy", decoding: "async", width: 800, height: 800, ...extra });

  // ---- segmented filters
  function segmented(root, options, onPick) {
    let current = options[0].key;
    const buttons = options.map(o => h("button", {
      type: "button", "aria-pressed": String(o.key === current),
      onclick: () => {
        current = o.key;
        buttons.forEach((b, i) => b.setAttribute("aria-pressed", String(options[i].key === current)));
        onPick(current);
      }
    }, o.label, o.count != null ? h("small", { text: o.count }) : null));
    root.replaceChildren(...buttons);
  }

  function stagger(grid, cards) {
    grid.replaceChildren(...cards);
    cards.forEach((c, i) => { c.classList.add("reveal"); c.style.transitionDelay = Math.min(i % 8, 7) * 40 + "ms"; });
    watch(grid);
  }

  // ---- wildlife
  const KINDS = [["all", "All"], ["Mammal", "Mammals"], ["Bird", "Birds"], ["Predator", "Predators"], ["Unusual", "Unusual"]];
  function animalSheet(a) {
    openSheet([
      h("div", { class: "gallery" }, img(a.img, a.name, { loading: "eager" })),
      h("div", { class: "text" },
        h("p", { class: "kicker", text: a.kind === "Unusual" ? "Unusual" : a.kind }),
        h("h2", { id: "sheet-title", text: a.name }),
        h("p", { class: "desc", text: a.blurb }),
        h("dl", {},
          h("dt", { text: "Harvest" }), h("dd", {}, h("div", { class: "chips" }, a.drops.map(d => h("span", { class: "chip", text: d })))),
          h("dt", { text: "Classname" }), h("dd", {}, clsButton(a.cls))))
    ]);
  }
  function animalCards(kind) {
    const list = D.animals.filter(a => kind === "all" || a.kind === kind);
    stagger($("#animal-grid"), list.map(a => h("button", { class: "card", type: "button", onclick: () => animalSheet(a), "aria-label": a.name + ", details" },
      h("div", { class: "pic" }, img(a.img, "")),
      h("div", { class: "info" },
        h("h3", { text: a.name }),
        h("p", { class: "meta", text: a.kind }),
        h("div", { class: "chips" }, a.drops.slice(0, 3).map(d => h("span", { class: "chip", text: d })),
          a.drops.length > 3 ? h("span", { class: "chip", text: "+" + (a.drops.length - 3) }) : null)))));
  }
  segmented($("#animal-filter"), KINDS.map(([k, l]) => ({ key: k, label: l })), animalCards);
  animalCards("all");

  // ---- mushrooms
  const LEVELS = { "Edible": "edible", "Cook first": "cook", "Poisonous": "poison", "Deadly": "deadly" };
  const levelBadge = f => h("span", { class: "badge lv-" + LEVELS[f.level], text: f.level });
  const poisonText = {
    "Edible": "Safe to eat raw, and better cooked.",
    "Cook first": "Edible once cooked; raw, it upsets the stomach.",
    "Poisonous": "Causes food poisoning: vomiting and stomach pain. Charcoal tablets help.",
    "Deadly": "Causes organ damage that cooking does not prevent, and can kill. Only chelation tablets stop it."
  };
  function fungusSheet(f) {
    openSheet([
      h("div", { class: "gallery" }, img(f.img, f.name, { loading: "eager" })),
      h("div", { class: "text" },
        h("p", { class: "kicker lv-" + LEVELS[f.level], text: f.edible ? "Edible fungus" : "Poisonous fungus" }),
        h("h2", { id: "sheet-title", text: f.name }),
        h("p", { class: "latin", text: f.latin }),
        levelBadge(f),
        h("p", { class: "desc", text: f.desc }),
        h("dl", {},
          h("dt", { text: "Effect" }), h("dd", { text: poisonText[f.level] }),
          h("dt", { text: "Habitat" }), h("dd", { text: f.habitat }),
          h("dt", { text: "Classname" }), h("dd", {}, clsButton(f.cls))))
    ]);
  }
  let fungiLevel = "all", fungiQuery = "";
  function fungiCards() {
    const q = fungiQuery.trim().toLowerCase();
    const list = D.fungi.filter(f => (fungiLevel === "all" || f.level === fungiLevel) &&
      (!q || (f.name + " " + f.latin + " " + f.cls).toLowerCase().includes(q)));
    const cards = list.map(f => h("button", { class: "card", type: "button", onclick: () => fungusSheet(f), "aria-label": f.name + ", " + f.level },
      h("div", { class: "pic" }, img(f.img, "")),
      h("div", { class: "info" }, h("h3", { text: f.name }), h("p", { class: "meta latin", text: f.latin }), levelBadge(f))));
    if (!cards.length) cards.push(h("p", { class: "empty", text: "No mushrooms match that search." }));
    stagger($("#fungi-grid"), cards);
  }
  const count = lv => D.fungi.filter(f => f.level === lv).length;
  segmented($("#fungi-filter"), [{ key: "all", label: "All", count: D.fungi.length }]
    .concat(Object.keys(LEVELS).map(lv => ({ key: lv, label: lv, count: count(lv) }))), lv => { fungiLevel = lv; fungiCards(); });
  $("#fungi-search").addEventListener("input", e => { fungiQuery = e.target.value; fungiCards(); });
  fungiCards();

  // ---- garden
  function cropSheet(c) {
    const thumbs = [[c.pack_img, "Seed packet"], [c.plant_img, "Ripe plant"], [c.img, c.name]];
    if (c.slice) thumbs.push([c.slice.img, c.slice.name]);
    const classes = [[c.cls, c.name], c.slice ? [c.slice.cls, c.slice.name] : null, [c.seeds_cls, "Seeds"], [c.pack_cls, "Seed packet"],
      [c.plant_cls, "Plant"]].filter(Boolean);
    openSheet([
      h("div", { class: "gallery" }, img(c.plant_img, c.name + " plant", { loading: "eager" }),
        h("div", { class: "thumbs" }, thumbs.map(([s, l]) => h("figure", {}, img(s, l, { loading: "eager" }), h("figcaption", { text: l }))))),
      h("div", { class: "text" },
        h("p", { class: "kicker", text: "Garden crop" }),
        h("h2", { id: "sheet-title", text: c.name }),
        h("p", { class: "desc", text: c.desc }),
        c.slice ? h("p", { class: "desc", text: "Prepare it with a blade for " + c.slice.count + " slices and its seeds. " + c.slice.desc }) : null,
        h("p", { class: "desc", style: "color:var(--muted)", text: c.plant }),
        h("dl", {},
          h("dt", { text: "Ripens in" }), h("dd", { text: "About " + c.minutes + " minutes" }),
          h("dt", { text: "Harvest" }), h("dd", { text: c.crops + " per plant" }),
          h("dt", { text: "New seeds" }), h("dd", { text: c.seeds }),
          ...classes.flatMap(([cls, l]) => [h("dt", { text: l }), h("dd", {}, clsButton(cls))])))
    ]);
  }
  stagger($("#crop-grid"), D.crops.map(c => h("button", { class: "card crop", type: "button", onclick: () => cropSheet(c), "aria-label": c.name + ", details" },
    h("div", { class: "pic" }, img(c.img, ""), c.slice ? img(c.slice.img, "", { class: "extra" }) : null),
    h("div", { class: "info" },
      h("h3", { text: c.name }),
      h("p", { class: "meta", text: c.tagline }),
      h("div", { class: "facts" },
        h("div", {}, h("b", { text: "~" + c.minutes + " min" }), h("span", { text: "to ripen" })),
        h("div", {}, h("b", { text: String(c.crops) }), h("span", { text: "per plant" })))))));

  // ---- setup snippets generated from the data
  const events = {};
  D.fungi.forEach(f => (events[f.event] = events[f.event] || []).push(f));
  $("#fungi-events").textContent = Object.entries(events).map(([ev, list]) =>
    "<!-- Add to the vanilla " + ev + " event's <children> -->\n" +
    list.map(f => '<child lootmax="0" lootmin="0" max="0" min="0" type="' + f.cls + '"/>' + (f.edible ? "" : "  <!-- " + f.level.toLowerCase() + " -->")).join("\n")
  ).join("\n\n");
  $("#crops-code").textContent = D.crops.map(c => c.pack_cls).join("\n");

  // ---- classnames
  const filter = $("#class-filter"), search = $("#class-search"), tbody = $("#class-body"), countEl = $("#class-count");
  [...new Set(D.classes.map(c => c[1]))].forEach(c => filter.add(new Option(c, c)));
  function table() {
    const q = search.value.trim().toLowerCase(), cat = filter.value;
    const rows = D.classes.filter(([cls, c, name]) => (!cat || c === cat) && (!q || (cls + " " + name).toLowerCase().includes(q)));
    tbody.replaceChildren(...rows.map(([cls, c, name]) => h("tr", {}, h("td", {}, clsButton(cls)), h("td", { text: name }), h("td", { text: c }))));
    countEl.textContent = rows.length + (rows.length === 1 ? " class" : " classes");
  }
  filter.addEventListener("change", table);
  search.addEventListener("input", table);
  table();
})();
