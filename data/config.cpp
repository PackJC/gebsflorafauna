class CfgPatches
{
	class gebsflorafauna
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};

/*


	Flora


*/
class CfgHorticulture
{
	class PlantBase;
	class Inventory_Base;
	class SeedBase;
	
	class Plant_Template : PlantBase
	{
		scope = 2;
		displayName = "$STR_cfgvehicles_land_horticulture_plant_tomato0";
		descriptionShort = "$STR_cfgvehicles_land_horticulture_plant_tomato1";
		model = "DZ\gear\cultivation\tomato_plant.p3d";
		hiddenSelectionsTextures[] =
		{
			"dz\gear\cultivation\data\tomato_plant_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\gear\cultivation\data\tomato_plant.rvmat"
		};
		class Horticulture
		{
			GrowthStagesCount = 6;
			CropsCount = 7;
			CropsType = "Tomato";
		};
	};
	class SeedPack_Template : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TomatoSeedsPack0";
		descriptionShort = "$STR_CfgVehicles_TomatoSeedsPack1";
		model = "\dz\gear\cultivation\tomato_seeds_pack.p3d";
		rotationFlags = 17;
		quantityBar = 1;
		itemSize[] = { 1,1 };
		weight = 10;
		spawnOffset = 0;
		lootCategory = "Materials";
		lootTag[] =
		{
			"Farm",
			"Kitchen",
			"Forester"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\cultivation\data\tomato_seeds.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\cultivation\data\tomato_seeds.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\cultivation\data\tomato_seeds_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\cultivation\data\tomato_seeds_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\cultivation\data\tomato_seeds_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType = "TomatoSeeds";
			ContainsSeedsQuantity = 10;
		};
		class UserActions
		{
			class EmptyPack
			{
				displayNameDefault = "$STR_CfgVehicles_TomatoSeedsPack_UserActions_EmptyPack0";
				displayName = "$STR_CfgVehicles_TomatoSeedsPack_UserActions_EmptyPack1";
				position = "action";
				onlyForPlayer = 1;
				radius = 2;
				condition = "true";
				statement = "this callMethod ['EmptySeedPack', _person];";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet = "seedpack_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class Seeds_template : SeedBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TomatoSeeds0";
		descriptionShort = "$STR_CfgVehicles_TomatoSeeds1";
		model = "\dz\gear\cultivation\tomato_seeds.p3d";
		canBeSplit = 1;
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		class Horticulture
		{
			PlantType = "Plant_Tomato";
		};
	};
};


/*


	Fauna & Mycology


*/
class cfgVehicles
{
	//Inherited from classes
	class ZombieBase;
	class AnimalBase;
	class Animal_GallusGallusDomesticus;
	class SurvivorBase;
	class Animal_CapraHircus;
	class Animal_UrsusArctos;
	class Animal_OvisAries;
	class BearPelt;
	class Edible_Base;
	class FoodAnimationSources;
	class MushroomsStageTransitions;
	class MeatStageTransitions;

	//Zombie Skeleton
	class ChimpBase : ZombieBase
	{

		scope = 0;
		model = "\gebsflorafauna\data\fauna\chimp\geb_chimp.p3d";
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 50;
				healthLevels[] =
				{

					{
						1.01,
						{}
					},

					{
						0.69999999,
						{}
					},

					{
						0.5,
						{}
					},

					{
						0.30000001,
						{}
					},

					{
						0.0099999998,
						{}
					}
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "rag";
				count = 1;
				quantityMinMaxCoef[] = { 1,1 };
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] =
					{

						{
							1.01,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0.0099999998,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1.5;
							};
							class Shock
							{
								damage = 1.5;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
						};
					};
					componentNames[] =
					{
						"Head",
						"Neck"
					};
					fatalInjuryCoef = 0.1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
					inventorySlotsCoefs[] = { 1.1,1,0.5 };
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 0.33000001;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 0.33000001;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0.1 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0.1 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 8;
				};
				class Sprint1
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 9;
				};
				class Sprint2
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 10;
				};
				class Sprint3
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 11;
				};
				class Sprint4
				{
					soundLookupTable = "";
					noise = "ZombieStepNoise";
					id = 12;
				};
				class Scuff1
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 17;
				};
				class Scuff2
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 18;
				};
				class Sccuff3
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 19;
				};
				class Scuff4
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 20;
				};
				class landFeetErc
				{
					soundLookupTable = "landFeetErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 21;
				};
				class landFootErc
				{
					soundLookupTable = "landFootErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 22;
				};
				class Bodyfall
				{
					soundLookupTable = "bodyfall_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable = "bodyfall_hand_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable = "bodyfall_slide_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 25;
				};
				class Prone_Walk_L
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 27;
				};
				class Prone_Walk_R
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 28;
				};
				class Prone_Run_L
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 29;
				};
				class Prone_Run_R
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet = "";
					id = 1;
				};
				class Attack_Light2
				{
					soundSet = "";
					id = 2;
				};
				class Attack_Heavy1
				{
					soundSet = "";
					id = 3;
				};
				class Attack_Heavy2
				{
					soundSet = "";
					id = 4;
				};
				class TwoHands
				{
					soundSet = "";
					id = 5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "";
					id = 2;
				};
				class Attack
				{
					soundSet = "";
					id = 5;
				};
				class Jump
				{
					soundSet = "";
					id = 10;
				};
				class Land
				{
					soundSet = "";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "";
					id = 20;
				};
			};
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 90;
			};
			class Blood
			{
				damage = 2000;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class AttackActions
		{
			class AttackLong
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] =
				{
					"run",
					"sprint"
				};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 100.75;
			};
			class AttackRun
			{
				attackName = "attackRun";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] =
				{
					"run",
					"sprint"
				};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 100.75;
			};
			class AttackShort
			{
				attackName = "attackShort";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] =
				{
					"idle",
					"walk"
				};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 100.75;
			};
			class AttackShortLow
			{
				attackName = "attackShortLow";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] =
				{
					"idle",
					"walk",
					"run"
				};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 100.75;
			};
			class CrawlAttackMove
			{
				attackName = "crawlAttackMove";
				ammoType = "MeleeZombieMale";
				stanceName = "crawl";
				moveAnimNames[] =
				{
					"walk"
				};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 100.75;
			};
			class CrawlAttackStill
			{
				attackName = "crawlAttackStill";
				ammoType = "MeleeZombieMale";
				stanceName = "crawl";
				moveAnimNames[] =
				{
					"idle"
				};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 100.75;
			};
		};
	};
	class geb_Chimp : ChimpBase
	{
		displayName = "Chimpanzee";
		descriptionShort = "A common Chimpanzee";
		scope = 2;
		model = "\gebsflorafauna\data\fauna\chimp\geb_chimp.p3d";

			class GlobalHealth
			{
				class Health
				{
					hitpoints = 60;
				};
			};

			hiddenSelections[] =
			{
				"body_m"
			};
			class Cargo
			{
				itemsCargoSize[] = { 10,15 };
				allowOwnedCargoManipulation = 1;
				openable = 0;
			};
			class DamageSystem
			{
				class GlobalHealth
				{
					class Health
					{
						hitpoints = 50;
					};
				};
			};
			class AnimEvents
			{
				class Steps
				{
					class Walk1
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 1;
					};
					class Walk2
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 2;
					};
					class Walk3
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 3;
					};
					class Walk4
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 4;
					};
					class Run1
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 5;
					};
					class Run2
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 6;
					};
					class Run3
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 7;
					};
					class Run4
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 8;
					};
					class Sprint1
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 9;
					};
					class Sprint2
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 10;
					};
					class Sprint3
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 11;
					};
					class Sprint4
					{
						soundLookupTable = "Chimp_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 12;
					};
					class Scuff1
					{
						soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 17;
					};
					class Scuff2
					{
						soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 18;
					};
					class Sccuff3
					{
						soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 19;
					};
					class Scuff4
					{
						soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 20;
					};
					class landFeetErc
					{
						soundLookupTable = "landFeetErc_Sneakers_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 21;
					};
					class landFootErc
					{
						soundLookupTable = "landFootErc_Sneakers_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 22;
					};
					class Bodyfall
					{
						soundLookupTable = "bodyfall_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 23;
					};
					class Bodyfall_Hand
					{
						soundLookupTable = "bodyfall_hand_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 24;
					};
					class Bodyfall_Slide
					{
						soundLookupTable = "bodyfall_slide_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 25;
					};
					class Prone_Walk_L
					{
						soundLookupTable = "walkProne_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 27;
					};
					class Prone_Walk_R
					{
						soundLookupTable = "walkProne_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 28;
					};
					class Prone_Run_L
					{
						soundLookupTable = "runProne_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 29;
					};
					class Prone_Run_R
					{
						soundLookupTable = "runProne_Zmb_LookupTable";
						noise = "ZombieStepNoise";
						id = 30;
					};
				};
				class Sounds
				{
					class Attack_Light1
					{
						soundSet = "Chimp_Attack_soundset";
						id = 1;
					};
					class Attack_Light2
					{
						soundSet = "Chimp_Attack_soundset";
						id = 2;
					};
					class Attack_Heavy1
					{
						soundSet = "Chimp_Attack_soundset";
						id = 3;
					};
					class Attack_Heavy2
					{
						soundSet = "Chimp_Attack_soundset";
						id = 4;
					};
					class TwoHands
					{
						soundSet = "Chimp_Attack_soundset";
						id = 5;
					};
				};
				class SoundVoice
				{
					class LightHit
					{
						soundSet = "Chimp_Attack_soundset";
						id = 1;
					};
					class HeavyHit
					{
						soundSet = "Chimp_Attack_soundset";
						id = 2;
					};
					class Attack
					{
						soundSet = "Chimp_Attack_soundset";
						id = 5;
					};
					class Jump
					{
						soundSet = "Chimp_Attack_soundset";
						id = 10;
					};
					class Land
					{
						soundSet = "Chimp_Attack_soundset";
						id = 11;
					};
					class CallToArmsShort
					{
						soundSet = "Chimp_Attack_soundset";
						id = 20;
					};
				};
			};
	};

	//Human Skeleton
	class geb_Penguin : AnimalBase
	{
		displayName = "Penguin";
		descriptionShort = "A common Penguin";
		simulation = "dayzanimal";
		scope = 2;
		model = "\gebsflorafauna\data\fauna\penguin\geb_penguin.p3d";
		aiAgentTemplate = "AmbientLife";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 100;
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "PenguinSteakMeat";
				count = 2;
				quantityMinMaxCoef[] = { 0.5,1 };
			};
			class ObtainedGuts
			{
				item = "SmallGuts";
				count = 1;
				quantityMinMaxCoef[] = { 0.5,0.80000001 };
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = { 0.2,0.30000001 };
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\gallus_gallus_domesticus\data\gallus_gallus_domesticus.xob";
			graphname = "dz\animals\animations\!graph_files\AmbientLife\AmbientLife_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\AmbientLife\GallusGallus_skeleton_AnimInstance.asi";
			startnode = "Master_SM";
			skeletonName = "gallus_gallus_domesticus.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "BirdWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "BirdWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "BirdWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "BirdWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 4;
				};
				class Grazing1
				{
					soundLookupTable = "BirdGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 9;
				};
				class Grazing2
				{
					soundLookupTable = "BirdGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 10;
				};
				class Bodyfall
				{
					soundLookupTable = "BirdBodyfall_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 11;
				};
			};
			class Sounds
			{
				class HenChick
				{
					soundSet = "HenChick_SoundSet";
					noise = "DeerRoarNoise";
					id = 1;
				};
				class HenCluck_A
				{
					soundSet = "HenCluck_A_SoundSet";
					noise = "DeerRoarNoise";
					id = 2;
				};
				class HenCluck_A_High
				{
					soundSet = "HenCluck_A_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 3;
				};
				class HenCluck_B
				{
					soundSet = "HenCluck_B_SoundSet";
					noise = "DeerRoarNoise";
					id = 4;
				};
				class HenCluck_B_High
				{
					soundSet = "HenCluck_B_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 5;
				};
				class HenCluck_C
				{
					soundSet = "HenCluck_C_SoundSet";
					noise = "DeerRoarNoise";
					id = 6;
				};
				class HenCluck_C_High
				{
					soundSet = "HenCluck_C_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 7;
				};
				class HenCluck_D
				{
					soundSet = "HenCluck_D_SoundSet";
					noise = "DeerRoarNoise";
					id = 8;
				};
				class HenCluck_D_High
				{
					soundSet = "HenCluck_D_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 9;
				};
				class HenCluck_E
				{
					soundSet = "HenCluck_E_SoundSet";
					noise = "DeerRoarNoise";
					id = 10;
				};
				class HenCluck_E_High
				{
					soundSet = "HenCluck_E_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 11;
				};
				class HenCluck_Silky
				{
					soundSet = "HenCluck_Silky_SoundSet";
					noise = "DeerRoarNoise";
					id = 12;
				};
				class HenCluck_Silky_High
				{
					soundSet = "HenCluck_Silky_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 13;
				};
				class HenCrow_A
				{
					soundSet = "HenCrow_A_SoundSet";
					noise = "DeerRoarNoise";
					id = 14;
				};
				class HenCrow_B
				{
					soundSet = "HenCrow_B_SoundSet";
					noise = "DeerRoarNoise";
					id = 15;
				};
				class HenCrow_C
				{
					soundSet = "HenCrow_C_SoundSet";
					noise = "DeerRoarNoise";
					id = 16;
				};
				class HenCrow_D
				{
					soundSet = "HenCrow_D_SoundSet";
					noise = "DeerRoarNoise";
					id = 17;
				};
				class HenCrow_E
				{
					soundSet = "HenCrow_E_SoundSet";
					noise = "DeerRoarNoise";
					id = 18;
				};
				class HenCrow_F
				{
					soundSet = "HenCrow_F_SoundSet";
					noise = "DeerRoarNoise";
					id = 19;
				};
				class HenCrow_G
				{
					soundSet = "HenCrow_G_SoundSet";
					noise = "DeerRoarNoise";
					id = 20;
				};
				class HenScream
				{
					soundSet = "HenScream_SoundSet";
					noise = "DeerRoarNoise";
					id = 21;
				};
				class BirdFlapping
				{
					soundSet = "BirdFlapping_SoundSet";
					noise = "DeerRoarNoise";
					id = 22;
				};
				class BirdFlapping_short
				{
					soundSet = "BirdFlapping_short_SoundSet";
					noise = "DeerRoarNoise";
					id = 23;
				};
				class BirdFlapping_mid
				{
					soundSet = "BirdFlapping_mid_SoundSet";
					noise = "DeerRoarNoise";
					id = 24;
				};
				class BirdFlapping_long
				{
					soundSet = "BirdFlapping_long_SoundSet";
					noise = "DeerRoarNoise";
					id = 25;
				};
				class HenCrowX1
				{
					soundSet = "HenCrowX1_SoundSet";
					noise = "DeerRoarNoise";
					id = 26;
				};
			};
			class Damages
			{
				class Bite
				{
					damage = "DeerBiteDamage";
					id = 1;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = { 0,0.25,0.80000001,3 };
		};
	}
	class geb_PenguinSteakMeat : Edible_Base
	{
		scope = 2;
		displayName = "$STR_PenguinSteakMeat";
		descriptionShort = "$STR_PenguinSteakMeatDesc";
		model = "\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 34;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 150;
		varQuantityMin = 0;
		varQuantityMax = 150;
		itemSize[] = { 1,2 };
		inventorySlot[] =
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[] =
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[] =
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources : FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = { 0,0,0 };
					nutrition_properties[] = { 5,50,50,1,0,4 };
					cooking_properties[] = { 0,0 };
				};
				class Rotten
				{
					visual_properties[] = { -1,-1,5 };
					nutrition_properties[] =
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[] = { 0,0 };
				};
				class Baked
				{
					visual_properties[] = { 0,1,1 };
					nutrition_properties[] = { 2,250,50,1,0 };
					cooking_properties[] = { 70,45 };
				};
				class Boiled
				{
					visual_properties[] = { 0,2,2 };
					nutrition_properties[] = { 2,200,100,1,0 };
					cooking_properties[] = { 70,55 };
				};
				class Dried
				{
					visual_properties[] = { 0,3,3 };
					nutrition_properties[] = { 3,200,0,1,0 };
					cooking_properties[] = { 70,120,80 };
				};
				class Burned
				{
					visual_properties[] = { 0,4,4 };
					nutrition_properties[] = { 5,50,0,1,0,16 };
					cooking_properties[] = { 100,30 };
				};
			};
			class FoodStageTransitions : MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength = 600;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};

	//Goat Skeleton
	class geb_Rabbit : AnimalBase
	{
		displayName = "Rabbit";
		descriptionShort = "A common Rabbit";
		model = "\gebsflorafauna\data\fauna\rabbit\geb_rabbit.p3d";
		aiAgentTemplate = "AmbientLife";
		scope = 2;
		simulation = "dayzanimal";

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 45;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
				class Blood
				{
					hitpoints = 100;
				};
				class Shock
				{
					hitpoints = 100;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] =
					{
						"Zone_Head"
					};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.15000001;
					canBleed = 0;
					class Health
					{
						hitpoints = 80;
						transferToGlobalCoef = 1;
					};
					class Blood : Health
					{
						hitpoints = 0;
					};
					class Shock : Health
					{
						hitpoints = 0;
					};
				};
				class Zone_Neck : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Neck"
					};
					transferToZonesNames[] =
					{
						"Zone_Chest"
					};
					transferToZonesCoefs[] = { 0.2 };
					fatalInjuryCoef = 0.050000001;
					class Health : Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Chest : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Chest"
					};
					transferToZonesNames[] =
					{
						"Zone_Neck",
						"Zone_Belly"
					};
					transferToZonesCoefs[] = { 0.15000001,0.15000001 };
					fatalInjuryCoef = 0.050000001;
					class Health : Health
					{
						hitpoints = 120;
					};
				};
				class Zone_Belly : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Belly"
					};
					transferToZonesNames[] =
					{
						"Zone_Pelvis",
						"Zone_Chest"
					};
					transferToZonesCoefs[] = { 0.15000001,0.15000001 };
					fatalInjuryCoef = 0.050000001;
					class Health : Health
					{
						hitpoints = 100;
					};
				};
				class Zone_Spine : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Spine"
					};
					transferToZonesNames[] =
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[] = { 0.1,0.1,0.1 };
					fatalInjuryCoef = 0.050000001;
					class Health : Health
					{
						hitpoints = 120;
					};
				};
				class Zone_Pelvis : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Pelvis"
					};
					transferToZonesNames[] =
					{
						"Zone_Spine",
						"Zone_Belly"
					};
					transferToZonesCoefs[] = { 0.15000001,0.15000001 };
					fatalInjuryCoef = 0.050000001;
					class Health : Health
					{
						hitpoints = 120;
					};
				};
				class Zone_Legs : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Legs"
					};
					transferToZonesNames[] =
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[] = { 0.1,0.1,0.1 };
					fatalInjuryCoef = 0;
					class Health : Health
					{
						hitpoints = 50;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "RabbitLegMeat";
				count = 2;
				itemZones[] =
				{
					"Zone_Chest",
					"Zone_Belly",
					"Zone_Pelvis"
				};
				countByZone[] = { 3,2,4 };
				quantityMinMaxCoef[] = { 0.5,1 };
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = { 0.5,0.80000001 };
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = { 0.80000001,1 };
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\capra_hircus\Data\capra_hircus_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Herbivores\Herbivores_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Herbivores\GoatSkeleton_AnimInstance.asi";
			startnode = "Master_GoatAndSheep_SM";
			skeletonName = "capra_hircus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 8;
				};
				class Grazing1
				{
					soundLookupTable = "HoofSmallGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 9;
				};
				class Grazing2
				{
					soundLookupTable = "HoofSmallGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 10;
				};
				class Bodyfall
				{
					soundLookupTable = "HoofSmallBodyfall_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "HoofSmallSettle_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "HoofSmallRest2standA_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "HoofSmallRest2standB_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "HoofSmallStand2restA_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "HoofSmallStand2restB_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "HoofSmallStand2restC_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 17;
				};
				class Rub1
				{
					soundLookupTable = "HoofSmallRub1_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 18;
				};
				class Rub2
				{
					soundLookupTable = "HoofSmallRub2_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 19;
				};
			};
			class Sounds
			{
				class GoatBleat_A
				{
					soundSet = "GoatBleat_A_SoundSet";
					noise = "DeerRoarNoise";
					id = 1;
				};
				class GoatBleat_B
				{
					soundSet = "GoatBleat_B_SoundSet";
					noise = "DeerRoarNoise";
					id = 2;
				};
				class GoatBleat_C
				{
					soundSet = "GoatBleat_C_SoundSet";
					noise = "DeerRoarNoise";
					id = 3;
				};
				class GoatBleat_D
				{
					soundSet = "GoatBleat_D_SoundSet";
					noise = "DeerRoarNoise";
					id = 4;
				};
				class GoatBleat_E
				{
					soundSet = "GoatBleat_E_SoundSet";
					noise = "DeerRoarNoise";
					id = 5;
				};
				class GoatBleat_F
				{
					soundSet = "GoatBleat_F_SoundSet";
					noise = "DeerRoarNoise";
					id = 6;
				};
				class GoatBleatX1
				{
					soundSet = "GoatBleatX1_SoundSet";
					noise = "DeerRoarNoise";
					id = 14;
				};
				class GoatBleatX2
				{
					soundSet = "GoatBleatX2_SoundSet";
					noise = "DeerRoarNoise";
					id = 16;
				};
				class GoatBleatX3
				{
					soundSet = "GoatBleatX3_SoundSet";
					noise = "DeerRoarNoise";
					id = 18;
				};
				class GoatBleatX4
				{
					soundSet = "GoatBleatX4_SoundSet";
					noise = "DeerRoarNoise";
					id = 20;
				};
				class GoatBleatX5
				{
					soundSet = "GoatBleatX5_SoundSet";
					noise = "DeerRoarNoise";
					id = 22;
				};
			};
			class Damages
			{
				class Bite
				{
					damage = "DeerBiteDamage";
					id = 1;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = { 0,0.11,0.41,2.0999999,4.5599999,10.44 };
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.5700001;
		};
	};


	//Chicken Skeleton
	class geb_Turkey: AnimalBase
	{
		displayName = "Turkey";
		descriptionShort = "A common Turkey";
		simulation = "dayzanimal";
		scope = 2;

		model="\gebsflorafauna\data\fauna\turkey\geb_turkey.p3d";
		aiAgentTemplate="AmbientLife";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
				class Blood
				{
					hitpoints=5000;
				};
				class Shock
				{
					hitpoints=100;
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="TurkeyBreastMeat";
				count=2;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedGuts
			{
				item="SmallGuts";
				count=0;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
			class ObtainedBones
			{
				item="Bone";
				count=1;
				quantityMinMaxCoef[]={0.2,0.30000001};
				transferToolDamageCoef=1;
			};
		};
		class enfanimsys
		{
			meshObject="dz\animals\gallus_gallus_domesticus\data\gallus_gallus_domesticus.xob";
			graphname="dz\animals\animations\!graph_files\AmbientLife\AmbientLife_Graph.agr";
			defaultinstance="dz\animals\animations\!graph_files\AmbientLife\GallusGallus_skeleton_AnimInstance.asi";
			startnode="Master_SM";
			skeletonName="gallus_gallus_domesticus.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="BirdWalk_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=1;
				};
				class Walk2
				{
					soundLookupTable="BirdWalk_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=2;
				};
				class Walk3
				{
					soundLookupTable="BirdWalk_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=3;
				};
				class Walk4
				{
					soundLookupTable="BirdWalk_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=4;
				};
				class Grazing1
				{
					soundLookupTable="BirdGrazing_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=9;
				};
				class Grazing2
				{
					soundLookupTable="BirdGrazing_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=10;
				};
				class Bodyfall
				{
					soundLookupTable="BirdBodyfall_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=11;
				};
			};
			class Sounds
			{
				class HenChick
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=1;
				};
				class HenCluck_A
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=2;
				};
				class HenCluck_A_High
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=3;
				};
				class HenCluck_B
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=4;
				};
				class HenCluck_B_High
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=5;
				};
				class HenCluck_C
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=6;
				};
				class HenCluck_C_High
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=7;
				};
				class HenCluck_D
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=8;
				};
				class HenCluck_D_High
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=9;
				};
				class HenCluck_E
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=10;
				};
				class HenCluck_E_High
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=11;
				};
				class HenCluck_Silky
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=12;
				};
				class HenCluck_Silky_High
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=13;
				};
				class HenCrow_A
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=14;
				};
				class HenCrow_B
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=15;
				};
				class HenCrow_C
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=16;
				};
				class HenCrow_D
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=17;
				};
				class HenCrow_E
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=18;
				};
				class HenCrow_F
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=19;
				};
				class HenCrow_G
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=20;
				};
				class HenScream
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=21;
				};
				class BirdFlapping
				{
					soundSet="BirdFlapping_SoundSet";
					noise="DeerRoarNoise";
					id=22;
				};
				class BirdFlapping_short
				{
					soundSet="BirdFlapping_short_SoundSet";
					noise="DeerRoarNoise";
					id=23;
				};
				class BirdFlapping_mid
				{
					soundSet="BirdFlapping_mid_SoundSet";
					noise="DeerRoarNoise";
					id=24;
				};
				class BirdFlapping_long
				{
					soundSet="BirdFlapping_long_SoundSet";
					noise="DeerRoarNoise";
					id=25;
				};
				class HenCrowX1
				{
					soundSet="Turkey_Soundset";
					noise="DeerRoarNoise";
					id=26;
				};
			};
			class Damages
			{
				class Bite
				{
					damage="DeerBiteDamage";
					id=1;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping=1;
			movementSpeedMapping[]={0,0.25,0.80000001,3};
		};
	}
	class geb_TurkeyBreastMeat : Edible_Base
	{
		scope = 2;
		displayName = "$STR_TurkeyBreastMeat";
		descriptionShort = "$STR_TurkeyBreastMeatDesc";
		model = "\dz\gear\food\meat_breast.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 34;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 125;
		varQuantityMin = 0;
		varQuantityMax = 125;
		itemSize[] = { 1,2 };
		inventorySlot[] =
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[] =
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[] =
		{
			"dz\gear\food\data\meat_breast_raw_CO.paa",
			"dz\gear\food\data\meat_breast_baked_CO.paa",
			"dz\gear\food\data\meat_breast_baked_CO.paa",
			"dz\gear\food\data\meat_breast_dried_CO.paa",
			"dz\gear\food\data\meat_breast_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\gear\food\data\meat_breast_raw.rvmat",
			"dz\gear\food\data\meat_breast_baked.rvmat",
			"dz\gear\food\data\meat_breast_boiled.rvmat",
			"dz\gear\food\data\meat_breast_dried.rvmat",
			"dz\gear\food\data\meat_breast_burnt.rvmat",
			"dz\gear\food\data\meat_breast_rotten.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources : FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = { 0,0,0 };
					nutrition_properties[] = { 5,50,50,1,0,4 };
					cooking_properties[] = { 0,0 };
				};
				class Rotten
				{
					visual_properties[] = { -1,-1,5 };
					nutrition_properties[] =
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[] = { 0,0 };
				};
				class Baked
				{
					visual_properties[] = { 0,1,1 };
					nutrition_properties[] = { 1,200,50,1,0 };
					cooking_properties[] = { 70,45 };
				};
				class Boiled
				{
					visual_properties[] = { 0,2,2 };
					nutrition_properties[] = { 1,150,100,1,0 };
					cooking_properties[] = { 70,55 };
				};
				class Dried
				{
					visual_properties[] = { 0,3,3 };
					nutrition_properties[] = { 2,150,0,1,0 };
					cooking_properties[] = { 70,120,80 };
				};
				class Burned
				{
					visual_properties[] = { 0,4,4 };
					nutrition_properties[] = { 5,50,0,1,0,16 };
					cooking_properties[] = { 100,30 };
				};
			};
			class FoodStageTransitions : MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength = 600;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class geb_Peacock : AnimalBase
	{
		displayName = "Peacock";
		descriptionShort = "A common Peacock";
		simulation = "dayzanimal";
		scope = 2;


		model = "\gebsflorafauna\data\fauna\peacock\geb_peacock.p3d";
		aiAgentTemplate = "AmbientLife";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 100;
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "ChickenBreastMeat";
				count = 2;
				quantityMinMaxCoef[] = { 0.5,1 };
			};
			class ObtainedFeathers
			{
				item = "ChickenFeather";
				count = 0;
				quantityMinMaxCoef[] = { 0.5,1 };
				transferToolDamageCoef = 1;
			};
			class ObtainedGuts
			{
				item = "SmallGuts";
				count = 0;
				quantityMinMaxCoef[] = { 0.5,0.80000001 };
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = { 0.2,0.30000001 };
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\gallus_gallus_domesticus\data\gallus_gallus_domesticus.xob";
			graphname = "dz\animals\animations\!graph_files\AmbientLife\AmbientLife_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\AmbientLife\GallusGallus_skeleton_AnimInstance.asi";
			startnode = "Master_SM";
			skeletonName = "gallus_gallus_domesticus.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "BirdWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "BirdWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "BirdWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "BirdWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 4;
				};
				class Grazing1
				{
					soundLookupTable = "BirdGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 9;
				};
				class Grazing2
				{
					soundLookupTable = "BirdGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 10;
				};
				class Bodyfall
				{
					soundLookupTable = "BirdBodyfall_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 11;
				};
			};
			class Sounds
			{
				class HenChick
				{
					soundSet = "HenChick_SoundSet";
					noise = "DeerRoarNoise";
					id = 1;
				};
				class HenCluck_A
				{
					soundSet = "HenCluck_A_SoundSet";
					noise = "DeerRoarNoise";
					id = 2;
				};
				class HenCluck_A_High
				{
					soundSet = "HenCluck_A_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 3;
				};
				class HenCluck_B
				{
					soundSet = "HenCluck_B_SoundSet";
					noise = "DeerRoarNoise";
					id = 4;
				};
				class HenCluck_B_High
				{
					soundSet = "HenCluck_B_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 5;
				};
				class HenCluck_C
				{
					soundSet = "HenCluck_C_SoundSet";
					noise = "DeerRoarNoise";
					id = 6;
				};
				class HenCluck_C_High
				{
					soundSet = "HenCluck_C_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 7;
				};
				class HenCluck_D
				{
					soundSet = "HenCluck_D_SoundSet";
					noise = "DeerRoarNoise";
					id = 8;
				};
				class HenCluck_D_High
				{
					soundSet = "HenCluck_D_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 9;
				};
				class HenCluck_E
				{
					soundSet = "HenCluck_E_SoundSet";
					noise = "DeerRoarNoise";
					id = 10;
				};
				class HenCluck_E_High
				{
					soundSet = "HenCluck_E_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 11;
				};
				class HenCluck_Silky
				{
					soundSet = "HenCluck_Silky_SoundSet";
					noise = "DeerRoarNoise";
					id = 12;
				};
				class HenCluck_Silky_High
				{
					soundSet = "HenCluck_Silky_High_SoundSet";
					noise = "DeerRoarNoise";
					id = 13;
				};
				class HenCrow_A
				{
					soundSet = "HenCrow_A_SoundSet";
					noise = "DeerRoarNoise";
					id = 14;
				};
				class HenCrow_B
				{
					soundSet = "HenCrow_B_SoundSet";
					noise = "DeerRoarNoise";
					id = 15;
				};
				class HenCrow_C
				{
					soundSet = "HenCrow_C_SoundSet";
					noise = "DeerRoarNoise";
					id = 16;
				};
				class HenCrow_D
				{
					soundSet = "HenCrow_D_SoundSet";
					noise = "DeerRoarNoise";
					id = 17;
				};
				class HenCrow_E
				{
					soundSet = "HenCrow_E_SoundSet";
					noise = "DeerRoarNoise";
					id = 18;
				};
				class HenCrow_F
				{
					soundSet = "HenCrow_F_SoundSet";
					noise = "DeerRoarNoise";
					id = 19;
				};
				class HenCrow_G
				{
					soundSet = "HenCrow_G_SoundSet";
					noise = "DeerRoarNoise";
					id = 20;
				};
				class HenScream
				{
					soundSet = "HenScream_SoundSet";
					noise = "DeerRoarNoise";
					id = 21;
				};
				class BirdFlapping
				{
					soundSet = "BirdFlapping_SoundSet";
					noise = "DeerRoarNoise";
					id = 22;
				};
				class BirdFlapping_short
				{
					soundSet = "BirdFlapping_short_SoundSet";
					noise = "DeerRoarNoise";
					id = 23;
				};
				class BirdFlapping_mid
				{
					soundSet = "BirdFlapping_mid_SoundSet";
					noise = "DeerRoarNoise";
					id = 24;
				};
				class BirdFlapping_long
				{
					soundSet = "BirdFlapping_long_SoundSet";
					noise = "DeerRoarNoise";
					id = 25;
				};
				class HenCrowX1
				{
					soundSet = "HenCrowX1_SoundSet";
					noise = "DeerRoarNoise";
					id = 26;
				};
			};
			class Damages
			{
				class Bite
				{
					damage = "DeerBiteDamage";
					id = 1;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = { 0,0.25,0.80000001,3 };
		};
	}
	class geb_PeacockBreastMeat : Edible_Base
	{
		scope = 2;
		displayName = "$STR_PeacockBreastMeat";
		descriptionShort = "$STR_PeacockBreastMeatDesc";
		model = "\dz\gear\food\meat_breast.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 34;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 125;
		varQuantityMin = 0;
		varQuantityMax = 125;
		itemSize[] = { 1,2 };
		inventorySlot[] =
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[] =
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[] =
		{
			"dz\gear\food\data\meat_breast_raw_CO.paa",
			"dz\gear\food\data\meat_breast_baked_CO.paa",
			"dz\gear\food\data\meat_breast_baked_CO.paa",
			"dz\gear\food\data\meat_breast_dried_CO.paa",
			"dz\gear\food\data\meat_breast_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\gear\food\data\meat_breast_raw.rvmat",
			"dz\gear\food\data\meat_breast_baked.rvmat",
			"dz\gear\food\data\meat_breast_boiled.rvmat",
			"dz\gear\food\data\meat_breast_dried.rvmat",
			"dz\gear\food\data\meat_breast_burnt.rvmat",
			"dz\gear\food\data\meat_breast_rotten.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources : FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = { 0,0,0 };
					nutrition_properties[] = { 5,50,50,1,0,4 };
					cooking_properties[] = { 0,0 };
				};
				class Rotten
				{
					visual_properties[] = { -1,-1,5 };
					nutrition_properties[] =
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[] = { 0,0 };
				};
				class Baked
				{
					visual_properties[] = { 0,1,1 };
					nutrition_properties[] = { 1,200,50,1,0 };
					cooking_properties[] = { 70,45 };
				};
				class Boiled
				{
					visual_properties[] = { 0,2,2 };
					nutrition_properties[] = { 1,150,100,1,0 };
					cooking_properties[] = { 70,55 };
				};
				class Dried
				{
					visual_properties[] = { 0,3,3 };
					nutrition_properties[] = { 2,150,0,1,0 };
					cooking_properties[] = { 70,120,80 };
				};
				class Burned
				{
					visual_properties[] = { 0,4,4 };
					nutrition_properties[] = { 5,50,0,1,0,16 };
					cooking_properties[] = { 100,30 };
				};
			};
			class FoodStageTransitions : MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength = 600;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};

	//Bear Skeleton
    class geb_Blackbear: Animal_UrsusArctos
    {
		scope=2;
		displayName="Black Bear";
		descriptionShort="A black bear";

    	hiddenSelections[]=
        {
            "body_injury",
            "flags"
        };        
		hiddenSelectionsTextures[]=
        {
            "\gebsflorafauna\data\fauna\bears\ursus_arctos\blackbear_co.paa",
            "\gebsflorafauna\data\fauna\bears\ursus_arctos\blackbear_fur_co.paa";
        };
        hiddenSelectionsMaterials[]=
		{
			"\gebsflorafauna\data\fauna\bears\ursus_arctos\ursus_arctor.rvmat",
			"\gebsflorafauna\data\fauna\bears\ursus_arctos\furry_alphatest32.rvmat"
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="BlackbearPelt";
				count=2;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item="BearSteakMeat";
				count=6;
				itemZones[]=
				{
					"Zone_Belly",
					"Zone_Pelvis"
				};
				countByZone[]={8,8};
				quantityMinMaxCoef[]={0.69999999,1};
			};
			class ObtainedLard
			{
				item="Lard";
				count=2;
				quantityMinMaxCoef[]={0.2,1};
			};
			class ObtainedGuts
			{
				item="Guts";
				count=4;
				quantityMinMaxCoef[]={0.40000001,1};
			};
			class ObtainedBones
			{
				item="Bone";
				count=5;
				quantityMinMaxCoef[]={0.30000001,1};
				transferToolDamageCoef=1;
			};
		};
    };
	class geb_Polarbear: Animal_UrsusArctos
    {
		scope=2;
		displayName="Polar Bear";
		descriptionShort="A polar bear";

    	hiddenSelections[]=
        {
            "body_injury",
            "flags"
        };        
		hiddenSelectionsTextures[]=
        {
            "\gebsflorafauna\data\fauna\bears\ursus_arctos\polarbear_co.paa",
            "\gebsflorafauna\data\fauna\bears\ursus_arctos\polarbear_fur_co.paa";
        };
        hiddenSelectionsMaterials[]=
		{
			"\gebsflorafauna\data\fauna\bears\ursus_arctos\ursus_arctor.rvmat",
			"\gebsflorafauna\data\fauna\bears\ursus_arctos\furry_alphatest32.rvmat"
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="PolarbearPelt";
				count=2;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item="BearSteakMeat";
				count=6;
				itemZones[]=
				{
					"Zone_Belly",
					"Zone_Pelvis"
				};
				countByZone[]={8,8};
				quantityMinMaxCoef[]={0.69999999,1};
			};
			class ObtainedLard
			{
				item="Lard";
				count=2;
				quantityMinMaxCoef[]={0.2,1};
			};
			class ObtainedGuts
			{
				item="Guts";
				count=4;
				quantityMinMaxCoef[]={0.40000001,1};
			};
			class ObtainedBones
			{
				item="Bone";
				count=5;
				quantityMinMaxCoef[]={0.30000001,1};
				transferToolDamageCoef=1;
			};
		};
    };

	//Sheep Skeleton
	class geb_Racoon : AnimalBase
	{
		displayName = "Racoon";
		descriptionShort = "A common Racoon";
		simulation = "dayzanimal";
		scope = 2;

		model = "\gebsflorafauna\data\fauna\racoon\geb_racoon.p3d";
		aiAgentTemplate = "Herbivores_OvisAries";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 280;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 100;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] =
					{
						"Zone_Head"
					};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.15000001;
					canBleed = 0;
					class Health
					{
						hitpoints = 120;
						transferToGlobalCoef = 1;
					};
					class Blood : Health
					{
						hitpoints = 0;
					};
					class Shock : Health
					{
						hitpoints = 0;
					};
				};
				class Zone_Neck : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Neck"
					};
					transferToZonesNames[] =
					{
						"Zone_Chest"
					};
					transferToZonesCoefs[] = { 0.2 };
					fatalInjuryCoef = 0.050000001;
					class Health : Health
					{
						hitpoints = 140;
					};
				};
				class Zone_Chest : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Chest"
					};
					transferToZonesNames[] =
					{
						"Zone_Neck",
						"Zone_Belly"
					};
					transferToZonesCoefs[] = { 0.15000001,0.15000001 };
					fatalInjuryCoef = 0.050000001;
					class Health : Health
					{
						hitpoints = 180;
					};
				};
				class Zone_Belly : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Belly"
					};
					transferToZonesNames[] =
					{
						"Zone_Pelvis",
						"Zone_Chest"
					};
					transferToZonesCoefs[] = { 0.15000001,0.15000001 };
					fatalInjuryCoef = 0.050000001;
					class Health : Health
					{
						hitpoints = 180;
					};
				};
				class Zone_Spine : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Spine"
					};
					transferToZonesNames[] =
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[] = { 0.1,0.1,0.1 };
					fatalInjuryCoef = 0.050000001;
					class Health : Health
					{
						hitpoints = 140;
					};
				};
				class Zone_Pelvis : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Pelvis"
					};
					transferToZonesNames[] =
					{
						"Zone_Spine",
						"Zone_Belly"
					};
					transferToZonesCoefs[] = { 0.15000001,0.15000001 };
					fatalInjuryCoef = 0.050000001;
					class Health : Health
					{
						hitpoints = 180;
					};
				};
				class Zone_Legs : Zone_Head
				{
					componentNames[] =
					{
						"Zone_Legs"
					};
					transferToZonesNames[] =
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[] = { 0.1,0.1,0.1 };
					fatalInjuryCoef = 0;
					class Health : Health
					{
						hitpoints = 100;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "RacoonSteakMeat";
				count = 2;
				itemZones[] =
				{
					"Zone_Chest",
					"Zone_Belly",
					"Zone_Pelvis"
				};
				quantityMinMaxCoef[] = { 0.5,1 };
			};
			class ObtainedPelt
			{
				item = "RacoonPelt";
				count = 1;
				itemZones[] =
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = { 0.5,0.80000001 };
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = { 0.80000001,1 };
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\ovis_aries_fem\data\sheep_and_ram_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Herbivores\Herbivores_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Herbivores\OvisAries_AnimInstance.asi";
			startnode = "Master_GoatAndSheep_SM";
			skeletonName = "ovis_aries_fem_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 8;
				};
				class Grazing1
				{
					soundLookupTable = "HoofSmallGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 9;
				};
				class Grazing2
				{
					soundLookupTable = "HoofSmallGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 10;
				};
				class Bodyfall
				{
					soundLookupTable = "HoofSmallBodyfall_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "HoofSmallSettle_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "HoofSmallRest2standA_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "HoofSmallRest2standB_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "HoofSmallStand2restA_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "HoofSmallStand2restB_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "HoofSmallStand2restC_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 17;
				};
				class Rub1
				{
					soundLookupTable = "HoofSmallRub1_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 18;
				};
				class Rub2
				{
					soundLookupTable = "HoofSmallRub2_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] =
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id = 19;
				};
			};
			class Sounds
			{
				class SheepBleat_A
				{
					soundSet = "SheepBleat_A_SoundSet";
					noise = "DeerRoarNoise";
					id = 1;
				};
				class SheepBleat_B
				{
					soundSet = "SheepBleat_B_SoundSet";
					noise = "DeerRoarNoise";
					id = 2;
				};
				class SheepBleat_C
				{
					soundSet = "SheepBleat_C_SoundSet";
					noise = "DeerRoarNoise";
					id = 3;
				};
				class SheepBleat_D
				{
					soundSet = "SheepBleat_D_SoundSet";
					noise = "DeerRoarNoise";
					id = 4;
				};
				class SheepBleat_E
				{
					soundSet = "SheepBleat_E_SoundSet";
					noise = "DeerRoarNoise";
					id = 5;
				};
				class SheepBleat_F
				{
					soundSet = "SheepBleat_F_SoundSet";
					noise = "DeerRoarNoise";
					id = 6;
				};
				class SheepBleat_G
				{
					soundSet = "SheepBleat_G_SoundSet";
					noise = "DeerRoarNoise";
					id = 7;
				};
				class SheepBleat_H
				{
					soundSet = "SheepBleat_H_SoundSet";
					noise = "DeerRoarNoise";
					id = 8;
				};
				class SheepBleatX1
				{
					soundSet = "SheepBleatX1_SoundSet";
					noise = "DeerRoarNoise";
					id = 14;
				};
				class SheepBleatX2
				{
					soundSet = "SheepBleatX2_SoundSet";
					noise = "DeerRoarNoise";
					id = 16;
				};
				class SheepBleatX3
				{
					soundSet = "SheepBleatX3_SoundSet";
					noise = "DeerRoarNoise";
					id = 18;
				};
				class SheepBleatX4
				{
					soundSet = "SheepBleatX4_SoundSet";
					noise = "DeerRoarNoise";
					id = 20;
				};
				class SheepBleatX5
				{
					soundSet = "SheepBleatX5_SoundSet";
					noise = "DeerRoarNoise";
					id = 22;
				};
			};
			class Damages
			{
				class Bite
				{
					damage = "DeerBiteDamage";
					id = 1;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = { 0,0.090999998,0.30000001,1.3,3.53,8.6300001 };
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.5700001;
		};
	};
	class geb_RacoonSteakMeat : Edible_Base
	{
		scope = 2;
		displayName = "$STR_RacoonSteakMeat";
		descriptionShort = "$STR_RacoonSteakMeatDesc";
		model = "\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 34;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 150;
		varQuantityMin = 0;
		varQuantityMax = 150;
		itemSize[] = { 1,2 };
		inventorySlot[] =
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[] =
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[] =
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources : FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = { 0,0,0 };
					nutrition_properties[] = { 5,50,50,1,0,4 };
					cooking_properties[] = { 0,0 };
				};
				class Rotten
				{
					visual_properties[] = { -1,-1,5 };
					nutrition_properties[] =
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[] = { 0,0 };
				};
				class Baked
				{
					visual_properties[] = { 0,1,1 };
					nutrition_properties[] = { 2,250,50,1,0 };
					cooking_properties[] = { 70,45 };
				};
				class Boiled
				{
					visual_properties[] = { 0,2,2 };
					nutrition_properties[] = { 2,200,100,1,0 };
					cooking_properties[] = { 70,55 };
				};
				class Dried
				{
					visual_properties[] = { 0,3,3 };
					nutrition_properties[] = { 3,200,0,1,0 };
					cooking_properties[] = { 70,120,80 };
				};
				class Burned
				{
					visual_properties[] = { 0,4,4 };
					nutrition_properties[] = { 5,50,0,1,0,16 };
					cooking_properties[] = { 100,30 };
				};
			};
			class FoodStageTransitions : MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength = 600;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};

	//Bears
	class geb_BlackbearPelt: BearPelt
	{
		scope=2;
		displayName="Black Bear Pelt";
		descriptionShort="Black Bear Pelt";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsflorafauna\data\fauna\bears\ursus_arctos\blackbear_pelt_co.paa"
		};
	};
	class geb_PolarbearPelt: BearPelt
	{
		scope=2;
		displayName="Polar Bear Pelt";
		descriptionShort="Polar Bear Pelt";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsflorafauna\data\fauna\bears\ursus_arctos\polarbear_pelt_co.paa"
		};
	};

	//Mycology
	class MushroomBase : Edible_Base
	{
		debug_ItemCategory = 6;
		varQuantityInit = 130;
		varQuantityMin = 0;
		varQuantityMax = 130;
	};
	class geb_BlackMorel : MushroomBase
	{
		scope = 2;
		displayName = "Black Morel";
		descriptionShort = "$STR_AgaricusMushroom1";
		model = "\gebsflorafauna\data\mycology\blackmorel\blackmorel.p3d";
		weight = 0;
		itemSize[] = { 1,2 };
		varQuantityInit = 150;
		varQuantityMin = 0;
		varQuantityMax = 150;
		stackedUnit = "";
		inventorySlot[] =
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[] =
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[] =
		{
			"dz\gear\food\data\mushroom_agaricus_raw_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_baked_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_baked_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_dried_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\gear\food\data\mushroom_agaricus_raw.rvmat",
			"dz\gear\food\data\mushroom_agaricus_baked.rvmat",
			"dz\gear\food\data\mushroom_agaricus_boiled.rvmat",
			"dz\gear\food\data\mushroom_agaricus_dried.rvmat",
			"dz\gear\food\data\mushroom_agaricus_burnt.rvmat",
			"dz\gear\food\data\mushroom_agaricus_rotten.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources : FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = { 0,0,0 };
					nutrition_properties[] = { 2.5,120,195,1,0 };
					cooking_properties[] = { 0,0 };
				};
				class Rotten
				{
					visual_properties[] = { -1,-1,5 };
					nutrition_properties[] = { 2,90,105,1,0,16 };
					cooking_properties[] = { 0,0 };
				};
				class Baked
				{
					visual_properties[] = { 0,1,1 };
					nutrition_properties[] = { 1.75,300,500,1,0 };
					cooking_properties[] = { 70,35 };
				};
				class Boiled
				{
					visual_properties[] = { 0,2,2 };
					nutrition_properties[] = { 1.5,250,600,1,0 };
					cooking_properties[] = { 70,45 };
				};
				class Dried
				{
					visual_properties[] = { 1,3,3 };
					nutrition_properties[] = { 0.75,250,105,1,0 };
					cooking_properties[] = { 70,30,80 };
				};
				class Burned
				{
					visual_properties[] = { 0,4,4 };
					nutrition_properties[] = { 2,90,90,1,0 };
					cooking_properties[] = { 100,20 };
				};
			};
			class FoodStageTransitions : MushroomsStageTransitions
			{
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class geb_LionsMane : MushroomBase
	{
		scope = 2;
		displayName = "Lions Mane";
		descriptionShort = "$STR_AgaricusMushroom1";
		model = "\gebsflorafauna\data\mycology\lionsmane\lionsmane.p3d";
		weight = 0;
		itemSize[] = { 1,2 };
		varQuantityInit = 150;
		varQuantityMin = 0;
		varQuantityMax = 150;
		stackedUnit = "";
		inventorySlot[] =
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[] =
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[] =
		{
			"dz\gear\food\data\mushroom_agaricus_raw_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_baked_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_baked_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_dried_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\gear\food\data\mushroom_agaricus_raw.rvmat",
			"dz\gear\food\data\mushroom_agaricus_baked.rvmat",
			"dz\gear\food\data\mushroom_agaricus_boiled.rvmat",
			"dz\gear\food\data\mushroom_agaricus_dried.rvmat",
			"dz\gear\food\data\mushroom_agaricus_burnt.rvmat",
			"dz\gear\food\data\mushroom_agaricus_rotten.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources : FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = { 0,0,0 };
					nutrition_properties[] = { 2.5,120,195,1,0 };
					cooking_properties[] = { 0,0 };
				};
				class Rotten
				{
					visual_properties[] = { -1,-1,5 };
					nutrition_properties[] = { 2,90,105,1,0,16 };
					cooking_properties[] = { 0,0 };
				};
				class Baked
				{
					visual_properties[] = { 0,1,1 };
					nutrition_properties[] = { 1.75,300,500,1,0 };
					cooking_properties[] = { 70,35 };
				};
				class Boiled
				{
					visual_properties[] = { 0,2,2 };
					nutrition_properties[] = { 1.5,250,600,1,0 };
					cooking_properties[] = { 70,45 };
				};
				class Dried
				{
					visual_properties[] = { 1,3,3 };
					nutrition_properties[] = { 0.75,250,105,1,0 };
					cooking_properties[] = { 70,30,80 };
				};
				class Burned
				{
					visual_properties[] = { 0,4,4 };
					nutrition_properties[] = { 2,90,90,1,0 };
					cooking_properties[] = { 100,20 };
				};
			};
			class FoodStageTransitions : MushroomsStageTransitions
			{
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class geb_PuffBall : MushroomBase
	{
		scope = 2;
		displayName = "Puff Ball";
		descriptionShort = "$STR_AgaricusMushroom1";
		model = "\gebsflorafauna\data\mycology\puffball\puffball.p3d";
		weight = 0;
		itemSize[] = { 1,2 };
		varQuantityInit = 150;
		varQuantityMin = 0;
		varQuantityMax = 150;
		stackedUnit = "";
		inventorySlot[] =
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[] =
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[] =
		{
			"dz\gear\food\data\mushroom_agaricus_raw_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_baked_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_baked_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_dried_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\gear\food\data\mushroom_agaricus_raw.rvmat",
			"dz\gear\food\data\mushroom_agaricus_baked.rvmat",
			"dz\gear\food\data\mushroom_agaricus_boiled.rvmat",
			"dz\gear\food\data\mushroom_agaricus_dried.rvmat",
			"dz\gear\food\data\mushroom_agaricus_burnt.rvmat",
			"dz\gear\food\data\mushroom_agaricus_rotten.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources : FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = { 0,0,0 };
					nutrition_properties[] = { 2.5,120,195,1,0 };
					cooking_properties[] = { 0,0 };
				};
				class Rotten
				{
					visual_properties[] = { -1,-1,5 };
					nutrition_properties[] = { 2,90,105,1,0,16 };
					cooking_properties[] = { 0,0 };
				};
				class Baked
				{
					visual_properties[] = { 0,1,1 };
					nutrition_properties[] = { 1.75,300,500,1,0 };
					cooking_properties[] = { 70,35 };
				};
				class Boiled
				{
					visual_properties[] = { 0,2,2 };
					nutrition_properties[] = { 1.5,250,600,1,0 };
					cooking_properties[] = { 70,45 };
				};
				class Dried
				{
					visual_properties[] = { 1,3,3 };
					nutrition_properties[] = { 0.75,250,105,1,0 };
					cooking_properties[] = { 70,30,80 };
				};
				class Burned
				{
					visual_properties[] = { 0,4,4 };
					nutrition_properties[] = { 2,90,90,1,0 };
					cooking_properties[] = { 100,20 };
				};
			};
			class FoodStageTransitions : MushroomsStageTransitions
			{
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class geb_WhiteMorel : MushroomBase
	{
		scope = 2;
		displayName = "White Morel";
		descriptionShort = "$STR_AgaricusMushroom1";
		model = "\gebsflorafauna\data\mycology\whitemorel\whitemorel.p3d";
		weight = 0;
		itemSize[] = { 1,2 };
		varQuantityInit = 150;
		varQuantityMin = 0;
		varQuantityMax = 150;
		stackedUnit = "";
		inventorySlot[] =
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[] =
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[] =
		{
			"dz\gear\food\data\mushroom_agaricus_raw_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_baked_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_baked_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_dried_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\gear\food\data\mushroom_agaricus_raw.rvmat",
			"dz\gear\food\data\mushroom_agaricus_baked.rvmat",
			"dz\gear\food\data\mushroom_agaricus_boiled.rvmat",
			"dz\gear\food\data\mushroom_agaricus_dried.rvmat",
			"dz\gear\food\data\mushroom_agaricus_burnt.rvmat",
			"dz\gear\food\data\mushroom_agaricus_rotten.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources : FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = { 0,0,0 };
					nutrition_properties[] = { 2.5,120,195,1,0 };
					cooking_properties[] = { 0,0 };
				};
				class Rotten
				{
					visual_properties[] = { -1,-1,5 };
					nutrition_properties[] = { 2,90,105,1,0,16 };
					cooking_properties[] = { 0,0 };
				};
				class Baked
				{
					visual_properties[] = { 0,1,1 };
					nutrition_properties[] = { 1.75,300,500,1,0 };
					cooking_properties[] = { 70,35 };
				};
				class Boiled
				{
					visual_properties[] = { 0,2,2 };
					nutrition_properties[] = { 1.5,250,600,1,0 };
					cooking_properties[] = { 70,45 };
				};
				class Dried
				{
					visual_properties[] = { 1,3,3 };
					nutrition_properties[] = { 0.75,250,105,1,0 };
					cooking_properties[] = { 70,30,80 };
				};
				class Burned
				{
					visual_properties[] = { 0,4,4 };
					nutrition_properties[] = { 2,90,90,1,0 };
					cooking_properties[] = { 100,20 };
				};
			};
			class FoodStageTransitions : MushroomsStageTransitions
			{
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};

};