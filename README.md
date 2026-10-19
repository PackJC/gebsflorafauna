<h1 align="center">
  <br>
  <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2764114664"><img src="https://github.com/user-attachments/assets/cec91a07-e35f-4c86-a3d1-f07f8a278ac2" alt="Geb's Flora & Fauna" width="900"></a>
  <br>
  <a href="https://discord.gg/G8uSGZ8yyf"><img src="https://img.shields.io/badge/Join-Discord-5865F2?style=for-the-badge&logo=discord&logoColor=white" alt="Join the Discord"></a>
  <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2764114664"><img src="https://img.shields.io/badge/Like_%26_Favorite-Steam_Workshop-1b2838?style=for-the-badge&logo=steam&logoColor=white" alt="Like and favorite Geb's Flora & Fauna on Steam Workshop"></a>
  <br>
</h1>

<h3 align="center">A Wildlife & Ecosystem Expansion for DayZ</h3>

<p align="center">
  <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2764114664"><img alt="Workshop Subscribers" src="https://img.shields.io/steam/subscriptions/2764114664?style=for-the-badge&color=purple&label=Workshop%20Subs"></a>
  <a href="https://packjc.github.io/gebsflorafauna/"><img alt="Website" src="https://img.shields.io/badge/Website-Field%20Guide-7ed99a?style=for-the-badge"></a>
</p>

<p align="center">
  <a href="https://packjc.github.io/gebsflorafauna/">Website</a> •
  <a href="#information">Information</a> •
  <a href="#key-features">Key Features</a> •
  <a href="#installation">Installation</a> •
  <a href="#main-classnames">Classnames</a> •
  <a href="#support">Support</a> •
  <a href="#license--terms">License & Terms</a>
</p>

## Information

Geb's Flora & Fauna expands DayZ's ecosystem with new wildlife, harvestable resources, fungi, and survival crafting.
The animals are designed as server-configured Central Economy encounters rather than effortless sources of food: server owners decide which species appear, where they live, and how common they are.

## Key Features

* **15 wildlife species**: chimpanzee, alien, penguin, rabbit, camel, elephant, giraffe, male and female turkey, peacock, black bear, polar bear, panda bear, raccoon, and cheetah.
* **44 forageable fungi**: 24 edible (black morel, white morel, lion's mane, giant puffball, chanterelle, chicken of the woods, hen of the woods, shaggy mane, hedgehog mushroom, honey mushroom, wood blewit, lobster mushroom, indigo milk cap, wine cap, velvet foot, beefsteak fungus, cauliflower mushroom, gem-studded puffball, bay bolete, orange birch bolete, old man of the woods, amethyst deceiver, fairy ring champignon and half-free morel) and 20 poisonous look-alikes (death cap, destroying angel, false morel, jack-o'-lantern, common earthball, sulphur tuft, deadly webcap, green-spored parasol, panther cap, funeral bell, the sickener, yellow stainer, ivory funnel, brown roll-rim, devil's bolete, deadly dapperling, deadly fibrecap, livid pinkgill, false death cap and early false morel). Each has its own model with baked, boiled, dried, burnt and rotten states. Poisons use DayZ's own illnesses: food poisoning (charcoal tablets), and for the deadly species heavy-metal-style organ damage that only chelation tablets stop.
* **Gardening**: 10 crops to grow in a garden plot (corn, okra, green beans, onions, garlic, yellow squash, watermelon, cantaloupe, carrots and cucumbers), each from its own seed packet through five growth stages to a harvest you can eat raw, bake, boil or dry. Cut fresh seeds back out of a raw crop with a blade (garlic splits into cloves; carrots come from packets only). Watermelons and cantaloupes are cut into slices with a blade, like vanilla's pumpkin.
* **Harvesting**: species-specific meat, pelts, raccoon tail, and elephant tusk where supported.
* **Crafting**: prepare a turkey with supported cutting tools and craft a raccoon-skin cap from a raccoon pelt and tail.
* **Server-controlled by design**: nothing replaces vanilla wildlife — you add only the event definitions and spawn positions you want.
* **Localization**: a DayZ `stringtable.csv` for supported interface languages.

## Installation

1. Subscribe to [Workshop item 2764114664](https://steamcommunity.com/sharedfiles/filedetails/?id=2764114664).
2. Install the published `@gebsflorafauna` folder beside the DayZ server executable.
3. Copy the included `.bikey` into the server's `keys` folder.
4. Add `-mod=@gebsflorafauna` to the server launch parameters. Every connecting player must load the same Workshop mod.
5. Add the desired classnames to the mission's Central Economy files. The mod does not replace your server's animal balance automatically.

The [server-owner guide](https://packjc.github.io/gebsflorafauna/#install) explains `events.xml`, `cfgeventspawns.xml`, validation, and testing in detail.

## Main Classnames

| Category | Classnames |
| --- | --- |
| Animals | `geb_Chimp`, `geb_Alien`, `geb_Penguin`, `geb_Rabbit`, `geb_Camel`, `geb_Elephant`, `geb_Giraffe`, `geb_Female_Turkey`, `geb_Turkey`, `geb_Peacock`, `geb_Blackbear`, `geb_Polarbear`, `geb_Pandabear`, `geb_Racoon`, `geb_Cheetah` |
| Edible fungi | `geb_BlackMorel`, `geb_WhiteMorel`, `geb_LionsMane`, `geb_PuffBall`, `geb_Chanterelle`, `geb_ChickenOfTheWoods`, `geb_HenOfTheWoods`, `geb_ShaggyMane`, `geb_HedgehogMushroom`, `geb_HoneyMushroom`, `geb_WoodBlewit`, `geb_LobsterMushroom`, `geb_IndigoMilkCap`, `geb_WineCap`, `geb_VelvetFoot`, `geb_BeefsteakFungus`, `geb_CauliflowerMushroom`, `geb_GemPuffball`, `geb_BayBolete`, `geb_OrangeBirchBolete`, `geb_OldManOfTheWoods`, `geb_AmethystDeceiver`, `geb_FairyRingChampignon`, `geb_HalfFreeMorel` |
| Poisonous fungi | `geb_DeathCap`, `geb_DestroyingAngel`, `geb_FalseMorel`, `geb_JackOLantern`, `geb_Earthball`, `geb_SulphurTuft`, `geb_DeadlyWebcap`, `geb_GreenSporedParasol`, `geb_PantherCap`, `geb_FuneralBell`, `geb_EmeticRussula`, `geb_YellowStainer`, `geb_IvoryFunnel`, `geb_BrownRollrim`, `geb_DevilsBolete`, `geb_DeadlyDapperling`, `geb_DeadlyFibrecap`, `geb_LividPinkgill`, `geb_FalseDeathCap`, `geb_EarlyFalseMorel` |
| Garden crops | `geb_Corn`, `geb_Okra`, `geb_GreenBeans`, `geb_Onion`, `geb_Garlic`, `geb_YellowSquash`, `geb_Watermelon`, `geb_WatermelonSlice`, `geb_Cantaloupe`, `geb_CantaloupeSlice`, `geb_Carrot`, `geb_Cucumber` |
| Seeds and seed packets | `geb_CornSeeds`, `geb_OkraSeeds`, `geb_GreenBeanSeeds`, `geb_OnionSeeds`, `geb_GarlicCloves`, `geb_YellowSquashSeeds`, `geb_WatermelonSeeds`, `geb_CantaloupeSeeds`, `geb_CarrotSeeds`, `geb_CucumberSeeds`, `geb_CornSeedsPack`, `geb_OkraSeedsPack`, `geb_GreenBeanSeedsPack`, `geb_OnionSeedsPack`, `geb_GarlicClovesPack`, `geb_YellowSquashSeedsPack`, `geb_WatermelonSeedsPack`, `geb_CantaloupeSeedsPack`, `geb_CarrotSeedsPack`, `geb_CucumberSeedsPack` |
| Plants | `geb_Plant_Corn`, `geb_Plant_Okra`, `geb_Plant_GreenBeans`, `geb_Plant_Onion`, `geb_Plant_Garlic`, `geb_Plant_YellowSquash`, `geb_Plant_Watermelon`, `geb_Plant_Cantaloupe`, `geb_Plant_Carrot`, `geb_Plant_Cucumber` |
| Crafting | `geb_RacoonSkinCap` |

The complete searchable list of 123 public config classes is available on the [project website](https://packjc.github.io/gebsflorafauna/#classnames).

## Support

* [Discord](https://discord.gg/G8uSGZ8yyf)
* [GitHub issues](https://github.com/PackJC/gebsflorafauna/issues)
* [Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=2764114664)

## License & Terms

The Steam Workshop item is the authorized distribution source. Do not re-upload, repack, mirror, or include the mod in a server/mod pack. Use a Steam Collection to publish a server's required mod list. Refer to the Workshop page for the complete current terms.

Copyright 2022–2026 Cole / PackJC.
