const species=[
  ["Mammal","Chimpanzee","geb_Chimp"],["Unusual","Green Alien","geb_Alien"],["Bird","Penguin","geb_Penguin"],["Mammal","Rabbit","geb_Rabbit"],["Mammal","Camel","geb_Camel"],["Mammal","Elephant","geb_Elephant"],["Mammal","Giraffe","geb_Giraffe"],["Bird","Female Turkey","geb_Female_Turkey"],["Bird","Turkey","geb_Turkey"],["Bird","Peacock","geb_Peacock"],["Predator","Black Bear","geb_Blackbear"],["Predator","Polar Bear","geb_Polarbear"],["Mammal","Raccoon","geb_Racoon"],["Predator","Cheetah","geb_Cheetah"],["Fungus","Black Morel","geb_BlackMorel"],["Fungus","White Morel","geb_WhiteMorel"],["Fungus","Lion's Mane","geb_LionsMane"],["Fungus","Puffball","geb_PuffBall"]
];
const items=[
  ["geb_Chimp","Animal","Chimpanzee"],["geb_ChimpMeat","Meat","Chimp meat"],["geb_Alien","Animal","Green alien"],["geb_AlienMeat","Meat","Alien meat"],["geb_AlienSkin","Pelt","Alien skin"],["geb_Penguin","Animal","Penguin"],["geb_PenguinMeat","Meat","Penguin meat"],["geb_Rabbit","Animal","Rabbit"],["geb_RabbitMeat","Meat","Rabbit meat"],["geb_Camel","Animal","Camel"],["geb_CamelMeat","Meat","Camel meat"],["geb_Elephant","Animal","Elephant"],["geb_ElephantMeat","Meat","Elephant meat"],["geb_ElephantPelt","Pelt","Elephant pelt"],["geb_ElephantTusk","Resource","Elephant tusk"],["geb_Giraffe","Animal","Giraffe"],["geb_GiraffeMeat","Meat","Giraffe meat"],["geb_GiraffePelt","Pelt","Giraffe pelt"],["geb_Female_Turkey","Animal","Female turkey"],["geb_Turkey","Animal","Turkey"],["geb_TurkeyMeat","Meat","Turkey meat"],["geb_Peacock","Animal","Peacock"],["geb_PeacockMeat","Meat","Peacock meat"],["geb_Blackbear","Animal","Black bear"],["geb_Polarbear","Animal","Polar bear"],["geb_Racoon","Animal","Raccoon"],["geb_RacoonMeat","Meat","Raccoon meat"],["geb_RacoonPelt","Pelt","Raccoon pelt"],["geb_RacoonTail","Resource","Raccoon tail"],["geb_RacoonSkinCap","Clothing","Crafted raccoon-skin cap"],["geb_Cheetah","Animal","Cheetah"],["geb_CheetahMeat","Meat","Cheetah meat"],["geb_CheetahPelt","Pelt","Cheetah pelt"],["geb_BlackbearPelt","Pelt","Black bear pelt"],["geb_PolarbearPelt","Pelt","Polar bear pelt"],["geb_BlackMorel","Fungus","Black morel"],["geb_LionsMane","Fungus","Lion's mane"],["geb_PuffBall","Fungus","Puffball"],["geb_WhiteMorel","Fungus","White morel"]
];
const panels=[...document.querySelectorAll(".panel")],tabs=[...document.querySelectorAll("[data-tab]")],toast=document.querySelector(".toast");
function activate(id,hash=true){const panel=document.getElementById(id);if(!panel)return;panels.forEach(p=>{p.hidden=p!==panel;p.classList.toggle("active",p===panel)});tabs.forEach(t=>t.classList.toggle("active",t.dataset.tab===id));document.querySelector(".tabs").classList.remove("open");if(hash)history.replaceState(null,"",`#${id}`);scrollTo({top:document.querySelector("nav").offsetTop,behavior:"smooth"})}
tabs.forEach(t=>t.onclick=()=>activate(t.dataset.tab));document.querySelectorAll("[data-open]").forEach(b=>b.onclick=()=>activate(b.dataset.open));document.querySelector(".menu").onclick=e=>{const list=document.querySelector(".tabs");list.classList.toggle("open");e.currentTarget.setAttribute("aria-expanded",String(list.classList.contains("open")))};
document.querySelector("#species-grid").replaceChildren(...species.map(([type,name,cls])=>{const a=document.createElement("article");a.className="species-card";a.innerHTML=`<small>${type}</small><h3>${name}</h3><p>Available for server-controlled placement and population balancing.</p><code>${cls}</code>`;return a}));
const filter=document.querySelector("#filter"),search=document.querySelector("#search"),body=document.querySelector("#class-body"),count=document.querySelector("#count");[...new Set(items.map(i=>i[1]))].sort().forEach(c=>filter.add(new Option(c,c)));
async function copy(value){try{await navigator.clipboard.writeText(value)}catch{const e=document.createElement("textarea");e.value=value;document.body.append(e);e.select();document.execCommand("copy");e.remove()}toast.classList.add("show");setTimeout(()=>toast.classList.remove("show"),1400)}
function render(){const q=search.value.toLowerCase(),category=filter.value;const list=items.filter(i=>(category==="all"||i[1]===category)&&i.join(" ").toLowerCase().includes(q));body.replaceChildren(...list.map(i=>{const r=document.createElement("tr");r.innerHTML=`<td>${i[0]}</td><td>${i[1]}</td><td>${i[2]}</td><td></td>`;const b=document.createElement("button");b.textContent="Copy";b.onclick=()=>copy(i[0]);r.lastElementChild.append(b);return r}));count.textContent=`${list.length} entries`}search.oninput=render;filter.onchange=render;render();
document.querySelectorAll("[data-copy-target]").forEach(b=>b.onclick=()=>{const target=document.getElementById(b.dataset.copyTarget);if(target)copy(target.textContent.trim())});const initial=location.hash.slice(1);if(panels.some(p=>p.id===initial))activate(initial,false);

/* --- Ambient effects --------------------------------------------------- */

const reducedMotion=window.matchMedia("(prefers-reduced-motion: reduce)").matches;

// Drifting fireflies in the hero.
const flyCanvas=document.getElementById("fireflies");
if(flyCanvas&&!reducedMotion){
  const ctx=flyCanvas.getContext("2d");
  let flies=[],width=0,height=0;
  function resizeFlies(){
    const dpr=Math.min(window.devicePixelRatio||1,2);
    width=flyCanvas.clientWidth;height=flyCanvas.clientHeight;
    flyCanvas.width=width*dpr;flyCanvas.height=height*dpr;
    ctx.setTransform(dpr,0,0,dpr,0,0);
    const count=Math.min(46,Math.round(width*height/26000));
    flies=Array.from({length:count},()=>({
      x:Math.random()*width,y:Math.random()*height,
      angle:Math.random()*Math.PI*2,turn:(Math.random()-.5)*.04,
      speed:.14+Math.random()*.3,radius:.8+Math.random()*1.5,
      phase:Math.random()*Math.PI*2,pulse:.6+Math.random()*1.2,
      tint:Math.random()<.3?"230, 200, 125":"150, 232, 172"
    }));
  }
  function drawFlies(now){
    ctx.clearRect(0,0,width,height);
    for(const f of flies){
      f.angle+=f.turn;f.x+=Math.cos(f.angle)*f.speed;f.y+=Math.sin(f.angle)*f.speed*.7;
      if(f.x<-6)f.x=width+6;if(f.x>width+6)f.x=-6;
      if(f.y<-6)f.y=height+6;if(f.y>height+6)f.y=-6;
      const glow=.25+.75*(0.5+0.5*Math.sin(f.phase+now*.001*f.pulse));
      ctx.beginPath();ctx.arc(f.x,f.y,f.radius*2.6,0,Math.PI*2);ctx.fillStyle=`rgba(${f.tint}, ${glow*.08})`;ctx.fill();
      ctx.beginPath();ctx.arc(f.x,f.y,f.radius,0,Math.PI*2);ctx.fillStyle=`rgba(${f.tint}, ${glow})`;ctx.fill();
    }
    requestAnimationFrame(drawFlies);
  }
  resizeFlies();window.addEventListener("resize",resizeFlies);requestAnimationFrame(drawFlies);
}

// Reveal cards and steps as they scroll (or tab) into view.
const revealTargets=document.querySelectorAll(".cards article,.species-card,.steps li,.faq details,aside,.notice");
if(revealTargets.length&&!reducedMotion&&"IntersectionObserver" in window){
  const revealObserver=new IntersectionObserver(entries=>{
    entries.forEach(entry=>{
      if(!entry.isIntersecting)return;
      entry.target.classList.add("fx-in");
      revealObserver.unobserve(entry.target);
    });
  },{threshold:.15});
  revealTargets.forEach((el,i)=>{
    el.classList.add("fx-reveal");
    el.style.transitionDelay=`${(i%4)*70}ms`;
    revealObserver.observe(el);
  });
}
