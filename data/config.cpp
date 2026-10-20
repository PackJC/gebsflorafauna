class CfgPatches
{
	class gebsanimals_data
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"gebsanimals",
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Headgear",
			"DZ_Gear_Food",
			"DZ_Animals",
			"DZ_Animals_Bliss"
		};
	};
};

/*


	Fauna


*/
class FoodAnimationSources;
class FruitStageTransitions;
class MushroomsStageTransitions;
class MeatStageTransitions;
class NotCookable;
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
	class Animal_CanisLupus;
	class Animal_BosTaurus;
	class ChickenBreastMeat;
	class CowSteakMeat;


	//Zombie Skeleton
	class ChimpBase : ZombieBase
	{

		scope = 0;
		model = "\gebsanimals\data\fauna\chimp\geb_chimp.p3d";
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 400;
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
					hitpoints = 400;
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
						hitpoints = 75;
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
						hitpoints = 150;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
			};
		};
	};
	class geb_Chimp : ChimpBase
	{
		// body_m covers every body face of the rebuilt model; its black fur cards carry their own material
		hiddenSelections[]=
		{
			"body_m"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\chimp\chimp_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\gebsanimals\data\fauna\chimp\chimp.rvmat"
		};
		displayName = "$STR_Chimp";
		descriptionShort = "$STR_ChimpDesc";
		scope = 2;
		model = "\gebsanimals\data\fauna\chimp\geb_chimp.p3d";

			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
				};
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
	class geb_ChimpMeat : CowSteakMeat
	{
		scope = 2;
		displayName = "$STR_ChimpMeat";
		descriptionShort = "$STR_ChimpMeatDesc";
		hiddenSelectionsTextures[] =
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
	};


	//Zombie Skeleton
	class AlienBase : ZombieBase
	{

		scope = 2;
		model = "\gebsanimals\data\fauna\alien\geb_GreenAlien.p3d";
		// The whole body is the body_m selection. Faces in a hidden selection are only drawn once it has a
		// texture, so these must stay set (the model is Alien Invasion's infected-rigged alien).
		hiddenSelections[] =
		{
			"body_m"
		};
		hiddenSelectionsTextures[] =
		{
			"\gebsanimals\data\fauna\alien\newgreenalien_ca.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\gebsanimals\data\fauna\alien\greenalien.rvmat"
		};
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 400;
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
					hitpoints = 400;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
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
				distance = 1.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.1999998;
				repeatable = 0;
				cooldown = 1.75;
			};
		};
	};
	class geb_Alien : AlienBase
	{
		displayName = "$STR_Alien";
		descriptionShort = "$STR_AlienDesc";
		scope = 2;
		model = "\gebsanimals\data\fauna\alien\geb_GreenAlien.p3d";

			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
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
						hitpoints = 400;
					};
				};
			};
			class AnimEvents
			{
				class Steps
				{
					class Walk1
					{
						soundLookupTable = "Alien_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 1;
					};
					class Walk2
					{
						soundLookupTable = "Alien_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 2;
					};
					class Walk3
					{
						soundLookupTable = "Alien_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 3;
					};
					class Walk4
					{
						soundLookupTable = "Alien_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 4;
					};
					class Run1
					{
						soundLookupTable = "Alien_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 5;
					};
					class Run2
					{
						soundLookupTable = "Alien_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 6;
					};
					class Run3
					{
						soundLookupTable = "Alien_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 7;
					};
					class Run4
					{
						soundLookupTable = "Alien_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 8;
					};
					class Sprint1
					{
						soundLookupTable = "Alien_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 9;
					};
					class Sprint2
					{
						soundLookupTable = "Alien_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 10;
					};
					class Sprint3
					{
						soundLookupTable = "Alien_Calm_soundset";
						noise = "ZombieStepNoise";
						id = 11;
					};
					class Sprint4
					{
						soundLookupTable = "Alien_Calm_soundset";
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
						soundSet = "Alien_Attack_soundset";
						id = 1;
					};
					class Attack_Light2
					{
						soundSet = "Alien_Attack_soundset";
						id = 2;
					};
					class Attack_Heavy1
					{
						soundSet = "Alien_Attack_soundset";
						id = 3;
					};
					class Attack_Heavy2
					{
						soundSet = "Alien_Attack_soundset";
						id = 4;
					};
					class TwoHands
					{
						soundSet = "Alien_Attack_soundset";
						id = 5;
					};
				};
				class SoundVoice
				{
					class LightHit
					{
						soundSet = "Alien_Attack_soundset";
						id = 1;
					};
					class HeavyHit
					{
						soundSet = "Alien_Attack_soundset";
						id = 2;
					};
					class Attack
					{
						soundSet = "Alien_Attack_soundset";
						id = 5;
					};
					class Jump
					{
						soundSet = "Alien_Attack_soundset";
						id = 10;
					};
					class Land
					{
						soundSet = "Alien_Attack_soundset";
						id = 11;
					};
					class CallToArmsShort
					{
						soundSet = "Alien_Attack_soundset";
						id = 20;
					};
				};
			};
	};
	class geb_AlienMeat : CowSteakMeat
	{
		scope = 2;
		displayName = "$STR_AlienMeat";
		descriptionShort = "$STR_AlienMeatDesc";
		hiddenSelections[] =
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[] =
		{
			"\gebsanimals\data\fauna\alien\alienmeat.paa";
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
	};
	class geb_AlienSkin: BearPelt
	{
		scope=2;
		displayName="$STR_AlienSkin";
		descriptionShort="$STR_AlienSkinDesc";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\alien\alienpelt.paa";
		};
	};

	//Human Skeleton
	class geb_Penguin : AnimalBase
	{
		// rebuilt on its vanilla skeleton (tools); every body face is in camo
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\penguin\penguin_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\gebsanimals\data\fauna\penguin\penguin.rvmat"
		};
		displayName = "$STR_Penguin";
		descriptionShort = "$STR_PenguinDesc";
		simulation = "dayzanimal";
		scope = 2;
		model = "\gebsanimals\data\fauna\penguin\geb_penguin.p3d";
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
				item = "geb_PenguinMeat";
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
			class ObtainedPelt
			{
				item="geb_PenguinPelt";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
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
				class TurkeyChick
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 1;
				};
				class TurkeyCluck_A
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 2;
				};
				class TurkeyCluck_A_High
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 3;
				};
				class TurkeyCluck_B
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 4;
				};
				class TurkeyCluck_B_High
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 5;
				};
				class TurkeyCluck_C
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 6;
				};
				class TurkeyCluck_C_High
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 7;
				};
				class TurkeyCluck_D
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 8;
				};
				class TurkeyCluck_D_High
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 9;
				};
				class TurkeyCluck_E
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 10;
				};
				class TurkeyCluck_E_High
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 11;
				};
				class TurkeyCluck_Silky
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 12;
				};
				class TurkeyCluck_Silky_High
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 13;
				};
				class TurkeyCrow_A
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 14;
				};
				class TurkeyCrow_B
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 15;
				};
				class TurkeyCrow_C
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 16;
				};
				class TurkeyCrow_D
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 17;
				};
				class TurkeyCrow_E
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 18;
				};
				class TurkeyCrow_F
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 19;
				};
				class TurkeyCrow_G
				{
					soundSet = "penguin_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 20;
				};
				class TurkeyScream
				{
					soundSet = "penguin_Calm_soundset";
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
				class TurkeyCrowX1
				{
					soundSet = "penguin_Calm_soundset";
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
			movementSpeedMapping[] = { 0,0.25,0.30000001,0.3 };
		};
	};
	class geb_PenguinMeat : CowSteakMeat
	{
		scope = 2;
		displayName = "$STR_PenguinMeat";
		descriptionShort = "$STR_PenguinMeatDesc";
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
	};


	//Goat Skeleton
	class geb_Rabbit : AnimalBase
	{
		// rebuilt on its vanilla skeleton (tools); every body face is in camo
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\rabbit\rabbit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\gebsanimals\data\fauna\rabbit\rabbit.rvmat"
		};
		displayName = "$STR_Rabbit";
		descriptionShort = "$STR_RabbitDesc";
		model = "\gebsanimals\data\fauna\rabbit\geb_rabbit.p3d";
		aiAgentTemplate = "AmbientLife_Lepus_Europaeus";
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
			meshObject="dz\animals\lepus_europaeus\data\lepus_europaeus_skeleton.xob";
			graphname="dz\animals\animations\!graph_files\AmbientLife\AmbientLife_Graph.agr";
			defaultinstance="dz\animals\animations\!graph_files\AmbientLife\LepusEuropaeus_Skeleton_AnimInstance.asi";
			startnode="Master_SM";
			skeletonName="lepus_europaeus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="PawSmallWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=1;
				};
				class Walk2
				{
					soundLookupTable="PawSmallWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=2;
				};
				class Walk3
				{
					soundLookupTable="PawSmallWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=3;
				};
				class Walk4
				{
					soundLookupTable="PawSmallWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=4;
				};
				class Run1
				{
					soundLookupTable="PawSmallRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=5;
				};
				class Run2
				{
					soundLookupTable="PawSmallRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=6;
				};
				class Run3
				{
					soundLookupTable="PawSmallRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=7;
				};
				class Run4
				{
					soundLookupTable="PawSmallRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=8;
				};
				class Grazing1
				{
					soundLookupTable="PawSmallGrazing_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=9;
				};
				class Grazing2
				{
					soundLookupTable="PawSmallGrazing_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=10;
				};
				class Bodyfall
				{
					soundLookupTable="PawSmallBodyfall_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=11;
				};
				class Settle
				{
					soundLookupTable="PawSmallSettle_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=12;
				};
				class Rest2standA
				{
					soundLookupTable="PawSmallRest2standA_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=13;
				};
				class Rest2standB
				{
					soundLookupTable="PawSmallRest2standB_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=14;
				};
				class Stand2restA
				{
					soundLookupTable="PawSmallStand2restA_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=15;
				};
				class Stand2restB
				{
					soundLookupTable="PawSmallStand2restB_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=16;
				};
				class Stand2restC
				{
					soundLookupTable="PawSmallStand2restC_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=17;
				};
				class Jump
				{
					soundLookupTable="PawSmallJump_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=18;
				};
				class Impact
				{
					soundLookupTable="PawSmallImpact_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=19;
				};
			};
			class Sounds
			{
				class HareChirp
				{
					soundSet="rabbit_Calm_soundset";
					noise="WolfRoarNoise";
					id=1;
				};
				class HareScream
				{
					soundSet="rabbit_Calm_soundset";
					noise="WolfRoarNoise";
					id=2;
				};
				class HareSquawk
				{
					soundSet="rabbit_Calm_soundset";
					noise="WolfRoarNoise";
					id=3;
				};
			};
			class Damages
			{
				class Bite
				{
					damage="WolfBiteDamage";
					id=1;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping=1;
			movementSpeedMapping[]={0,0.25,0.80000001,3,5};
		};
	};
	class geb_RabbitMeat : CowSteakMeat
	{
		scope = 2;
		displayName = "$STR_RabbitMeat";
		descriptionShort = "$STR_RabbitMeatDesc";
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
	};


	//Cow Skeleton
	class geb_Camel: AnimalBase
	{
		// rebuilt on its vanilla skeleton (tools); every body face is in camo
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\camel\camel_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\gebsanimals\data\fauna\camel\camel.rvmat"
		};
		simulation="dayzanimal";
		scope=2;
		model = "\gebsanimals\data\fauna\camel\geb_camel.p3d";
		displayName="$STR_Camel";
		descriptionShort="$STR_CamelDesc";
		aiAgentTemplate="Herbivores_CervusElaphus";
		injuryLevels[]={1,0.5,0.2,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
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
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[]=
					{
						"Zone_Head"
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					fatalInjuryCoef=0.15000001;
					canBleed=0;
					class Health
					{
						hitpoints=250;
						transferToGlobalCoef=1;
					};
					class Blood: Health
					{
						hitpoints=0;
					};
					class Shock: Health
					{
						hitpoints=0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Neck"
					};
					transferToZonesNames[]=
					{
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=150;
					};
				};
				class Zone_Chest: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Chest"
					};
					transferToZonesNames[]=
					{
						"Zone_Neck",
						"Zone_Belly"
					};
					transferToZonesCoefs[]={0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=200;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Belly"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5,0.5};
					class Health: Health
					{
						hitpoints=200;
					};
				};
				class Zone_Spine: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Spine"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5,0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=200;
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Pelvis"
					};
					transferToZonesNames[]=
					{
						"Zone_Spine",
						"Zone_Belly"
					};
					transferToZonesCoefs[]={0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=250;
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Legs"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5,0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=100;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="geb_CamelMeat";
				count=20;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly",
					"Zone_Pelvis"
				};
				countByZone[]={6,6,6};
				quantityMinMaxCoef[]={0.75,1};
			};
			class ObtainedPelt
			{
				item="geb_CamelPelt";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="Guts";
				count=5;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
			class ObtainedLard
			{
				item="Lard";
				count=3;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedBones
			{
				item="Bone";
				count=4;
				quantityMinMaxCoef[]={0.80000001,1};
				transferToolDamageCoef=1;
			};
		};
		class enfanimsys
		{
			meshObject="dz\animals\cervus_elaphus\Data\cervus_elaphus_skeleton.xob";
			graphname="dz\animals\animations\!graph_files\Herbivores\Herbivores_Graph.agr";
			defaultinstance="dz\animals\animations\!graph_files\Herbivores\DeerSkeleton_AnimInstance.asi";
			startnode="MasterDeers_SM";
			skeletonName="cervus_elaphus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="HoofMediumWalk_LookupTable";
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
					soundLookupTable="HoofMediumWalk_LookupTable";
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
					soundLookupTable="HoofMediumWalk_LookupTable";
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
					soundLookupTable="HoofMediumWalk_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=4;
				};
				class Run1
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=5;
				};
				class Run2
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=6;
				};
				class Run3
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=7;
				};
				class Run4
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=8;
				};
				class Grazing1
				{
					soundLookupTable="HoofMediumGrazing_LookupTable";
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
					soundLookupTable="HoofMediumGrazing_LookupTable";
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
					soundLookupTable="HoofMediumBodyfall_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=11;
				};
				class Settle
				{
					soundLookupTable="HoofMediumSettle_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=12;
				};
				class Rest2standA
				{
					soundLookupTable="HoofMediumRest2standA_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=13;
				};
				class Rest2standB
				{
					soundLookupTable="HoofMediumRest2standB_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=14;
				};
				class Stand2restA
				{
					soundLookupTable="HoofMediumStand2restA_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=15;
				};
				class Stand2restB
				{
					soundLookupTable="HoofMediumStand2restB_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=16;
				};
				class Stand2restC
				{
					soundLookupTable="HoofMediumStand2restC_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=17;
				};
				class Rub1
				{
					soundLookupTable="HoofMediumRub1_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=18;
				};
				class Rub2
				{
					soundLookupTable="HoofMediumRub2_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=19;
				};
			};
			class Sounds
			{
				class DeerBleat
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=1;
				};
				class DoeBleat
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=2;
				};
				class DeerBreath
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=3;
				};
				class DeerBark
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=4;
				};
				class DoeBark
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=5;
				};
				class RoeBark
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=6;
				};
				class DeerCall
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=7;
				};
				class DeerCallFear
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=8;
				};
				class DeerGrunt
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=9;
				};
				class DeerRoar
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=10;
				};
				class DeerRoarLong
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=11;
				};
				class DeerRoarShort
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=12;
				};
				class DeerSnort
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=13;
				};
				class DeerRoarX1
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=14;
				};
				class DeerRoarX1_Tail
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=15;
				};
				class DeerRoarX2
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=16;
				};
				class DeerRoarX2_Tail
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=17;
				};
				class DeerRoarX3
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=18;
				};
				class DeerRoarX3_Tail
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=19;
				};
				class DeerRoarX4
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=20;
				};
				class DeerRoarX4_Tail
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=21;
				};
				class DeerRoarX5
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=22;
				};
				class DeerRoarX5_Tail
				{
					soundSet="camel_Calm_soundset";
					noise="DeerRoarNoise";
					id=23;
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
			movementSpeedMapping[]={0,0.25,0.80000001,3.2,6,17};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout=0.5;
			lookAtFilterSpeed=1.5700001;
		};
	};
	class geb_CamelMeat : CowSteakMeat
	{
		scope = 2;
		displayName = "$STR_CamelMeat";
		descriptionShort = "$STR_CamelMeatDesc";
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
	};


	//Cow Skeleton
	class geb_Elephant: Animal_BosTaurus
	{
		// rebuilt on its vanilla skeleton (tools); every body face is in camo
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\elephant\elephant_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\gebsanimals\data\fauna\elephant\elephant.rvmat"
		};
		simulation="dayzanimal";
		scope=2;
		model = "\gebsanimals\data\fauna\elephant\geb_elephant.p3d";
		displayName="$STR_Elephant";
		descriptionShort="$STR_ElephantDesc";
		aiAgentTemplate="Herbivores_BosTaurus";
		injuryLevels[]={1,0.5,0.2,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
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
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[]=
					{
						"Zone_Head"
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					fatalInjuryCoef=0.15000001;
					canBleed=0;
					class Health
					{
						hitpoints=250;
						transferToGlobalCoef=1;
					};
					class Blood: Health
					{
						hitpoints=0;
					};
					class Shock: Health
					{
						hitpoints=0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Neck"
					};
					transferToZonesNames[]=
					{
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=150;
					};
				};
				class Zone_Chest: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Chest"
					};
					transferToZonesNames[]=
					{
						"Zone_Neck",
						"Zone_Belly"
					};
					transferToZonesCoefs[]={0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=200;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Belly"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5,0.5};
					class Health: Health
					{
						hitpoints=200;
					};
				};
				class Zone_Spine: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Spine"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5,0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=200;
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Pelvis"
					};
					transferToZonesNames[]=
					{
						"Zone_Spine",
						"Zone_Belly"
					};
					transferToZonesCoefs[]={0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=250;
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Legs"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5,0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=100;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="geb_ElephantMeat";
				count=20;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly",
					"Zone_Pelvis"
				};
				countByZone[]={6,6,6};
				quantityMinMaxCoef[]={0.75,1};
			};
			class ObtainedPelt
			{
				item="geb_ElephantPelt";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="Guts";
				count=5;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
			class ObtainedLard
			{
				item="Lard";
				count=3;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedBones
			{
				item="geb_ElephantTusk";
				count=2;
				quantityMinMaxCoef[]={0.80000001,1};
				transferToolDamageCoef=1;
			};
		};
		class enfanimsys
		{
			meshObject="dz\animals\bos_taurus\data\CowAndBull_skeleton.xob";
			graphname="dz\animals\animations\!graph_files\Herbivores\Herbivores_Graph.agr";
			defaultinstance="dz\animals\animations\!graph_files\Herbivores\CowAndBull_AnimInstance.asi";
			startnode="Master_CowAndBull_SM";
			skeletonName="CowAndBull_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="HoofMediumWalk_LookupTable";
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
					soundLookupTable="HoofMediumWalk_LookupTable";
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
					soundLookupTable="HoofMediumWalk_LookupTable";
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
					soundLookupTable="HoofMediumWalk_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=4;
				};
				class Run1
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=5;
				};
				class Run2
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=6;
				};
				class Run3
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=7;
				};
				class Run4
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=8;
				};
				class Grazing1
				{
					soundLookupTable="HoofMediumGrazing_LookupTable";
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
					soundLookupTable="HoofMediumGrazing_LookupTable";
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
					soundLookupTable="HoofMediumBodyfall_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=11;
				};
				class Settle
				{
					soundLookupTable="HoofMediumSettle_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=12;
				};
				class Rest2standA
				{
					soundLookupTable="HoofMediumRest2standA_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=13;
				};
				class Rest2standB
				{
					soundLookupTable="HoofMediumRest2standB_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=14;
				};
				class Stand2restA
				{
					soundLookupTable="HoofMediumStand2restA_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=15;
				};
				class Stand2restB
				{
					soundLookupTable="HoofMediumStand2restB_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=16;
				};
				class Stand2restC
				{
					soundLookupTable="HoofMediumStand2restC_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=17;
				};
				class Rub1
				{
					soundLookupTable="HoofMediumRub1_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=18;
				};
				class Rub2
				{
					soundLookupTable="HoofMediumRub2_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=19;
				};
			};
			class Sounds
			{
				class CattleBawl
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=1;
				};
				class CattleBellow
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=2;
				};
				class CattleBreath
				{
					soundSet="CattleBreath_SoundSet";
					noise="DeerRoarNoise";
					id=3;
				};
				class CattleGroan
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=4;
				};
				class CattleHoarse
				{
					soundSet="";
					noise="DeerRoarNoise";
					id=5;
				};
				class CattleHonk
				{
					soundSet="";
					noise="DeerRoarNoise";
					id=6;
				};
				class CattleMooA
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=7;
				};
				class CattleMooALong
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=8;
				};
				class CattleMooB
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=9;
				};
				class CattleMooC
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=10;
				};
				class CattleRoar
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=11;
				};
				class CattleSigh
				{
					soundSet="CattleSigh_SoundSet";
					noise="DeerRoarNoise";
					id=12;
				};
				class CattleSighLong
				{
					soundSet="CattleSighLong_SoundSet";
					noise="DeerRoarNoise";
					id=13;
				};
				class CattleMooX1
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=14;
				};
				class CattleMooX1_Tail
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=15;
				};
				class CattleMooX2
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=16;
				};
				class CattleMooX2_Tail
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=17;
				};
				class CattleMooX3
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=18;
				};
				class CattleMooX3_Tail
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=19;
				};
				class CattleMooX4
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=20;
				};
				class CattleMooX4_Tail
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=21;
				};
				class CattleMooX5
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=22;
				};
				class CattleMooX5_Tail
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=23;
				};
				class CattleSnort
				{
					soundSet="elephant_Calm_soundset";
					noise="DeerRoarNoise";
					id=24;
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
			movementSpeedMapping[]={0,0.25,0.60000002,2.2,5,11};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout=0.5;
			lookAtFilterSpeed=1.5700001;
		};
	};
	class geb_ElephantMeat : CowSteakMeat
	{
		scope = 2;
		displayName = "$STR_ElephantMeat";
		descriptionShort = "$STR_ElephantMeatDesc";
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
	};
	class geb_ElephantPelt: BearPelt
	{
		scope=2;
		displayName="$STR_ElephantPelt";
		descriptionShort="$STR_ElephantPeltDesc";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\elephant\elephantpelt.paa";
		};
	};
	class geb_ElephantTusk: BearPelt
	{
		scope=2;
		displayName="$STR_ElephantTusk";
		descriptionShort="$STR_ElephantTuskDesc";
		model = "\gebsanimals\data\fauna\elephant\geb_elephanttusk.p3d";

	};

	//Cow Skeleton
	class geb_Giraffe: AnimalBase
	{
		// rebuilt on its vanilla skeleton (tools); every body face is in camo
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\giraffe\giraffe_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\gebsanimals\data\fauna\giraffe\giraffe.rvmat"
		};
		simulation="dayzanimal";
		scope=2;
		model = "\gebsanimals\data\fauna\giraffe\geb_giraffe.p3d";
		displayName="$STR_Giraffe";
		descriptionShort="$STR_GiraffeDesc";
		aiAgentTemplate="Herbivores_CervusElaphus";
		injuryLevels[]={1,0.5,0.2,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
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
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[]=
					{
						"Zone_Head"
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					fatalInjuryCoef=0.15000001;
					canBleed=0;
					class Health
					{
						hitpoints=250;
						transferToGlobalCoef=1;
					};
					class Blood: Health
					{
						hitpoints=0;
					};
					class Shock: Health
					{
						hitpoints=0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Neck"
					};
					transferToZonesNames[]=
					{
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=150;
					};
				};
				class Zone_Chest: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Chest"
					};
					transferToZonesNames[]=
					{
						"Zone_Neck",
						"Zone_Belly"
					};
					transferToZonesCoefs[]={0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=200;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Belly"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5,0.5};
					class Health: Health
					{
						hitpoints=200;
					};
				};
				class Zone_Spine: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Spine"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5,0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=200;
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Pelvis"
					};
					transferToZonesNames[]=
					{
						"Zone_Spine",
						"Zone_Belly"
					};
					transferToZonesCoefs[]={0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=250;
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Legs"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.5,0.5,0.5};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=100;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="geb_GiraffeMeat";
				count=20;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly",
					"Zone_Pelvis"
				};
				countByZone[]={6,6,6};
				quantityMinMaxCoef[]={0.75,1};
			};
			class ObtainedPelt
			{
				item="geb_GiraffePelt";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="Guts";
				count=5;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
			class ObtainedLard
			{
				item="Lard";
				count=3;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedBones
			{
				item="Bone";
				count=4;
				quantityMinMaxCoef[]={0.80000001,1};
				transferToolDamageCoef=1;
			};
		};
		class enfanimsys
		{
			meshObject="dz\animals\cervus_elaphus\Data\cervus_elaphus_skeleton.xob";
			graphname="dz\animals\animations\!graph_files\Herbivores\Herbivores_Graph.agr";
			defaultinstance="dz\animals\animations\!graph_files\Herbivores\DeerSkeleton_AnimInstance.asi";
			startnode="MasterDeers_SM";
			skeletonName="cervus_elaphus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="HoofMediumWalk_LookupTable";
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
					soundLookupTable="HoofMediumWalk_LookupTable";
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
					soundLookupTable="HoofMediumWalk_LookupTable";
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
					soundLookupTable="HoofMediumWalk_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=4;
				};
				class Run1
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=5;
				};
				class Run2
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=6;
				};
				class Run3
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=7;
				};
				class Run4
				{
					soundLookupTable="HoofMediumRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=8;
				};
				class Grazing1
				{
					soundLookupTable="HoofMediumGrazing_LookupTable";
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
					soundLookupTable="HoofMediumGrazing_LookupTable";
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
					soundLookupTable="HoofMediumBodyfall_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=11;
				};
				class Settle
				{
					soundLookupTable="HoofMediumSettle_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=12;
				};
				class Rest2standA
				{
					soundLookupTable="HoofMediumRest2standA_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=13;
				};
				class Rest2standB
				{
					soundLookupTable="HoofMediumRest2standB_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=14;
				};
				class Stand2restA
				{
					soundLookupTable="HoofMediumStand2restA_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=15;
				};
				class Stand2restB
				{
					soundLookupTable="HoofMediumStand2restB_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=16;
				};
				class Stand2restC
				{
					soundLookupTable="HoofMediumStand2restC_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=17;
				};
				class Rub1
				{
					soundLookupTable="HoofMediumRub1_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=18;
				};
				class Rub2
				{
					soundLookupTable="HoofMediumRub2_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=19;
				};
			};
			class Sounds
			{
				class DeerBleat
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=1;
				};
				class DoeBleat
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=2;
				};
				class DeerBreath
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=3;
				};
				class DeerBark
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=4;
				};
				class DoeBark
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=5;
				};
				class RoeBark
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=6;
				};
				class DeerCall
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=7;
				};
				class DeerCallFear
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=8;
				};
				class DeerGrunt
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=9;
				};
				class DeerRoar
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=10;
				};
				class DeerRoarLong
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=11;
				};
				class DeerRoarShort
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=12;
				};
				class DeerSnort
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=13;
				};
				class DeerRoarX1
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=14;
				};
				class DeerRoarX1_Tail
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=15;
				};
				class DeerRoarX2
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=16;
				};
				class DeerRoarX2_Tail
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=17;
				};
				class DeerRoarX3
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=18;
				};
				class DeerRoarX3_Tail
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=19;
				};
				class DeerRoarX4
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=20;
				};
				class DeerRoarX4_Tail
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=21;
				};
				class DeerRoarX5
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=22;
				};
				class DeerRoarX5_Tail
				{
					soundSet="giraffe_Calm_soundset";
					noise="DeerRoarNoise";
					id=23;
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
			movementSpeedMapping[]={0,0.25,0.80000001,3.2,6,17};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout=0.5;
			lookAtFilterSpeed=1.5700001;
		};
	};
	class geb_GiraffeMeat : CowSteakMeat
	{
		scope = 2;
		displayName = "$STR_GiraffeMeat";
		descriptionShort = "$STR_GiraffeMeatDesc";
		model = "\dz\gear\food\meat_steak.p3d";
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
	};
	class geb_GiraffePelt: BearPelt
	{
		scope=2;
		displayName="$STR_GiraffePelt";
		descriptionShort="$STR_GiraffePeltDesc";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\giraffe\giraffepelt.paa";
		};
	};

	class geb_Female_Turkey: AnimalBase
	{
		// rebuilt on its vanilla skeleton (tools); every body face is in camo
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\female_turkey\female_turkey_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\gebsanimals\data\fauna\female_turkey\female_turkey.rvmat"
		};
		displayName = "$STR_Female_Turkey";
		descriptionShort = "$STR_Female_TurkeyDesc";
		simulation = "dayzanimal";
		scope = 2;
		model="\gebsanimals\data\fauna\female_turkey\geb_female_turkey.p3d";
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
				item="geb_TurkeyMeat";
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
				class TurkeyChick
				{
					soundSet="TurkeyChick_SoundSet";
					noise="DeerRoarNoise";
					id=1;
				};
				class TurkeyCluck_A
				{
					soundSet="TurkeyCluck_A_SoundSet";
					noise="DeerRoarNoise";
					id=2;
				};
				class TurkeyCluck_A_High
				{
					soundSet="TurkeyCluck_A_High_SoundSet";
					noise="DeerRoarNoise";
					id=3;
				};
				class TurkeyCluck_B
				{
					soundSet="TurkeyCluck_B_SoundSet";
					noise="DeerRoarNoise";
					id=4;
				};
				class TurkeyCluck_B_High
				{
					soundSet="TurkeyCluck_B_High_SoundSet";
					noise="DeerRoarNoise";
					id=5;
				};
				class TurkeyCluck_C
				{
					soundSet="TurkeyCluck_C_SoundSet";
					noise="DeerRoarNoise";
					id=6;
				};
				class TurkeyCluck_C_High
				{
					soundSet="TurkeyCluck_C_High_SoundSet";
					noise="DeerRoarNoise";
					id=7;
				};
				class TurkeyCluck_D
				{
					soundSet="TurkeyCluck_D_SoundSet";
					noise="DeerRoarNoise";
					id=8;
				};
				class TurkeyCluck_D_High
				{
					soundSet="TurkeyCluck_D_High_SoundSet";
					noise="DeerRoarNoise";
					id=9;
				};
				class TurkeyCluck_E
				{
					soundSet="TurkeyCluck_E_SoundSet";
					noise="DeerRoarNoise";
					id=10;
				};
				class TurkeyCluck_E_High
				{
					soundSet="TurkeyCluck_E_High_SoundSet";
					noise="DeerRoarNoise";
					id=11;
				};
				class TurkeyCluck_Silky
				{
					soundSet="TurkeyCluck_Silky_SoundSet";
					noise="DeerRoarNoise";
					id=12;
				};
				class TurkeyCluck_Silky_High
				{
					soundSet="TurkeyCluck_Silky_High_SoundSet";
					noise="DeerRoarNoise";
					id=13;
				};
				class TurkeyCrow_A
				{
					soundSet="TurkeyCrow_A_SoundSet";
					noise="DeerRoarNoise";
					id=14;
				};
				class TurkeyCrow_B
				{
					soundSet="TurkeyCrow_B_SoundSet";
					noise="DeerRoarNoise";
					id=15;
				};
				class TurkeyCrow_C
				{
					soundSet="TurkeyCrow_C_SoundSet";
					noise="DeerRoarNoise";
					id=16;
				};
				class TurkeyCrow_D
				{
					soundSet="TurkeyCrow_D_SoundSet";
					noise="DeerRoarNoise";
					id=17;
				};
				class TurkeyCrow_E
				{
					soundSet="TurkeyCrow_E_SoundSet";
					noise="DeerRoarNoise";
					id=18;
				};
				class TurkeyCrow_F
				{
					soundSet="TurkeyCrow_F_SoundSet";
					noise="DeerRoarNoise";
					id=19;
				};
				class TurkeyCrow_G
				{
					soundSet="TurkeyCrow_G_SoundSet";
					noise="DeerRoarNoise";
					id=20;
				};
				class TurkeyScream
				{
					soundSet="TurkeyScream_SoundSet";
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
				class TurkeyCrowX1
				{
					soundSet="TurkeyCrowX1_SoundSet";
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
	};
	//Chicken Skeleton
	class geb_Turkey: AnimalBase
	{
		// rebuilt on its vanilla skeleton (tools); every body face is in camo
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\turkey\turkey_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\gebsanimals\data\fauna\turkey\turkey.rvmat"
		};
		displayName = "$STR_Turkey";
		descriptionShort = "$STR_TurkeyDesc";
		simulation = "dayzanimal";
		scope = 2;

		model="\gebsanimals\data\fauna\turkey\geb_turkey.p3d";
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
				item="geb_TurkeyMeat";
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
				class TurkeyChick
				{
					soundSet="TurkeyChick_SoundSet";
					noise="DeerRoarNoise";
					id=1;
				};
				class TurkeyCluck_A
				{
					soundSet="TurkeyCluck_A_SoundSet";
					noise="DeerRoarNoise";
					id=2;
				};
				class TurkeyCluck_A_High
				{
					soundSet="TurkeyCluck_A_High_SoundSet";
					noise="DeerRoarNoise";
					id=3;
				};
				class TurkeyCluck_B
				{
					soundSet="TurkeyCluck_B_SoundSet";
					noise="DeerRoarNoise";
					id=4;
				};
				class TurkeyCluck_B_High
				{
					soundSet="TurkeyCluck_B_High_SoundSet";
					noise="DeerRoarNoise";
					id=5;
				};
				class TurkeyCluck_C
				{
					soundSet="TurkeyCluck_C_SoundSet";
					noise="DeerRoarNoise";
					id=6;
				};
				class TurkeyCluck_C_High
				{
					soundSet="TurkeyCluck_C_High_SoundSet";
					noise="DeerRoarNoise";
					id=7;
				};
				class TurkeyCluck_D
				{
					soundSet="TurkeyCluck_D_SoundSet";
					noise="DeerRoarNoise";
					id=8;
				};
				class TurkeyCluck_D_High
				{
					soundSet="TurkeyCluck_D_High_SoundSet";
					noise="DeerRoarNoise";
					id=9;
				};
				class TurkeyCluck_E
				{
					soundSet="TurkeyCluck_E_SoundSet";
					noise="DeerRoarNoise";
					id=10;
				};
				class TurkeyCluck_E_High
				{
					soundSet="TurkeyCluck_E_High_SoundSet";
					noise="DeerRoarNoise";
					id=11;
				};
				class TurkeyCluck_Silky
				{
					soundSet="TurkeyCluck_Silky_SoundSet";
					noise="DeerRoarNoise";
					id=12;
				};
				class TurkeyCluck_Silky_High
				{
					soundSet="TurkeyCluck_Silky_High_SoundSet";
					noise="DeerRoarNoise";
					id=13;
				};
				class TurkeyCrow_A
				{
					soundSet="TurkeyCrow_A_SoundSet";
					noise="DeerRoarNoise";
					id=14;
				};
				class TurkeyCrow_B
				{
					soundSet="TurkeyCrow_B_SoundSet";
					noise="DeerRoarNoise";
					id=15;
				};
				class TurkeyCrow_C
				{
					soundSet="TurkeyCrow_C_SoundSet";
					noise="DeerRoarNoise";
					id=16;
				};
				class TurkeyCrow_D
				{
					soundSet="TurkeyCrow_D_SoundSet";
					noise="DeerRoarNoise";
					id=17;
				};
				class TurkeyCrow_E
				{
					soundSet="TurkeyCrow_E_SoundSet";
					noise="DeerRoarNoise";
					id=18;
				};
				class TurkeyCrow_F
				{
					soundSet="TurkeyCrow_F_SoundSet";
					noise="DeerRoarNoise";
					id=19;
				};
				class TurkeyCrow_G
				{
					soundSet="TurkeyCrow_G_SoundSet";
					noise="DeerRoarNoise";
					id=20;
				};
				class TurkeyScream
				{
					soundSet="TurkeyScream_SoundSet";
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
				class TurkeyCrowX1
				{
					soundSet="TurkeyCrowX1_SoundSet";
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
	};
	class geb_TurkeyMeat : ChickenBreastMeat
	{
		scope = 2;
		displayName = "$STR_TurkeyMeat";
		descriptionShort = "$STR_TurkeyMeatDesc";
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
	};


	//Chicken Skeleton
	class geb_Peacock : AnimalBase
	{
		// rebuilt on its vanilla skeleton (tools); every body face is in camo
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\peacock\peacock_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\gebsanimals\data\fauna\peacock\peacock.rvmat"
		};
		displayName = "$STR_Peacock";
		descriptionShort = "$STR_PeacockDesc";
		simulation = "dayzanimal";
		scope = 2;


		model = "\gebsanimals\data\fauna\peacock\geb_peacock.p3d";
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
				item = "PeacockMeat";
				count = 2;
				quantityMinMaxCoef[] = { 0.5,1 };
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
				class TurkeyChick
				{
					soundSet = "peacock_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 1;
				};
				class TurkeyCluck_A
				{
					soundSet = "peacock_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 2;
				};
				class TurkeyCluck_A_High
				{
					soundSet = "peacock_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 3;
				};
				class TurkeyCluck_B
				{
					soundSet = "peacock_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 4;
				};
				class TurkeyCluck_B_High
				{
					soundSet = "peacock_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 5;
				};
				class TurkeyCluck_C
				{
					soundSet = "peacock_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 6;
				};
				class TurkeyCluck_C_High
				{
					soundSet = "peacock_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 7;
				};
				class TurkeyCluck_D
				{
					soundSet = "peacock_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 8;
				};
				class TurkeyCluck_D_High
				{
					soundSet = "peacock_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 9;
				};
				class TurkeyCluck_E
				{
					soundSet = "";
					noise = "DeerRoarNoise";
					id = 10;
				};
				class TurkeyCluck_E_High
				{
					soundSet = "";
					noise = "DeerRoarNoise";
					id = 11;
				};
				class TurkeyCluck_Silky
				{
					soundSet = "";
					noise = "DeerRoarNoise";
					id = 12;
				};
				class TurkeyCluck_Silky_High
				{
					soundSet = "";
					noise = "DeerRoarNoise";
					id = 13;
				};
				class TurkeyCrow_A
				{
					soundSet = "";
					noise = "DeerRoarNoise";
					id = 14;
				};
				class TurkeyCrow_B
				{
					soundSet = "";
					noise = "DeerRoarNoise";
					id = 15;
				};
				class TurkeyCrow_C
				{
					soundSet = "peacock_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 16;
				};
				class TurkeyCrow_D
				{
					soundSet = "";
					noise = "DeerRoarNoise";
					id = 17;
				};
				class TurkeyCrow_E
				{
					soundSet = "peacock_Calm_soundset";
					noise = "DeerRoarNoise";
					id = 18;
				};
				class TurkeyCrow_F
				{
					soundSet = "";
					noise = "DeerRoarNoise";
					id = 19;
				};
				class TurkeyCrow_G
				{
					soundSet = "";
					noise = "DeerRoarNoise";
					id = 20;
				};
				class TurkeyScream
				{
					soundSet = "peacock_Calm_soundset";
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
				class TurkeyCrowX1
				{
					soundSet = "peacock_Calm_soundset";
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
	};
	class geb_PeacockMeat : ChickenBreastMeat
	{
		scope = 2;
		displayName = "$STR_PeacockMeat";
		descriptionShort = "$STR_PeacockMeatDesc";
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
	};


	//Bear Skeleton
    class geb_Blackbear: Animal_UrsusArctos
    {
		// body_injury = the body, flags = the fur cards (vanilla bear); materials in the same order
		hiddenSelections[]=
		{
			"body_injury",
			"flags"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\bears\ursus_arctos\blackbear_co.paa",
			"\gebsanimals\data\fauna\bears\ursus_arctos\blackfurry_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals_bliss\ursus_arctos\data\ursus_arctor.rvmat",
			"\gebsanimals\data\fauna\bears\ursus_arctos\blackbear_fur.rvmat"
		};
		scope=2;
		displayName="$STR_BlackBear";
		descriptionShort="$STR_BlackBearDesc";
        
		class Skinning
		{
			class ObtainedPelt
			{
				item="geb_BlackbearPelt";
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
		// body_injury = the body, flags = the fur cards (vanilla bear); materials in the same order
		hiddenSelections[]=
		{
			"body_injury",
			"flags"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\bears\ursus_arctos\polarbear_co.paa",
			"\gebsanimals\data\fauna\bears\ursus_arctos\polarfurry_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals_bliss\ursus_arctos\data\ursus_arctor.rvmat",
			"\gebsanimals\data\fauna\bears\ursus_arctos\polarbear_fur.rvmat"
		};
		scope=2;
		displayName="$STR_PolarBear";
		descriptionShort="$STR_PolarBearDesc";
        
		class Skinning
		{
			class ObtainedPelt
			{
				item="geb_PolarbearPelt";
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
	class geb_Pandabear: Animal_UrsusArctos
    {
		// vanilla brown bear model; white strands tinted black/white by panda_fur's body map
		hiddenSelections[]=
		{
			"body_injury",
			"flags"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\bears\ursus_arctos\panda_co.paa",
			"dz\animals_bliss\ursus_arctos\data\furry_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals_bliss\ursus_arctos\data\ursus_arctor.rvmat",
			"\gebsanimals\data\fauna\bears\ursus_arctos\panda_fur.rvmat"
		};
		// body_injury = the body, flags = the fur cards (vanilla bear); materials in the same order
		scope=2;
		displayName="$STR_PandaBear";
		descriptionShort="$STR_PandaBearDesc";
        
		class Skinning
		{
			class ObtainedPelt
			{
				item="geb_PandabearPelt";
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
		// rebuilt on its vanilla skeleton (tools); every body face is in camo
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\racoon\racoon_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\gebsanimals\data\fauna\racoon\racoon.rvmat"
		};
		displayName = "$STR_Racoon";
		descriptionShort = "$STR_RacoonDesc";
		simulation = "dayzanimal";
		scope = 2;

		model = "\gebsanimals\data\fauna\racoon\geb_racoon.p3d";
		aiAgentTemplate = "AmbientLife_Vulpes_Vulpes";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
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
					hitpoints = 2000;
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
				item = "geb_RacoonMeat";
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
				item = "geb_RacoonPelt";
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
			class ObtainedTail
			{
				item = "geb_RacoonTail";
				count = 1;
				itemZones[] =
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject="dz\animals\vulpes_vulpes\data\vulpes_vulpes_skeleton.xob";
			graphname="dz\animals\animations\!graph_files\AmbientLife\AmbientLife_Graph.agr";
			defaultinstance="dz\animals\animations\!graph_files\AmbientLife\VulpesVulpes_Skeleton.asi";
			startnode="Master_SM";
			skeletonName="vulpes_vulpes_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="PawMediumWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=1;
				};
				class Walk2
				{
					soundLookupTable="PawMediumWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=2;
				};
				class Walk3
				{
					soundLookupTable="PawMediumWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=3;
				};
				class Walk4
				{
					soundLookupTable="PawMediumWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=4;
				};
				class Run1
				{
					soundLookupTable="PawMediumRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=5;
				};
				class Run2
				{
					soundLookupTable="PawMediumRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=6;
				};
				class Run3
				{
					soundLookupTable="PawMediumRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=7;
				};
				class Run4
				{
					soundLookupTable="PawMediumRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=8;
				};
				class Bodyfall
				{
					soundLookupTable="PawMediumBodyfall_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=11;
				};
				class Settle
				{
					soundLookupTable="PawMediumSettle_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=12;
				};
				class Rest2standA
				{
					soundLookupTable="PawMediumRest2standA_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=13;
				};
				class Rest2standB
				{
					soundLookupTable="PawMediumRest2standB_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=14;
				};
				class Stand2restA
				{
					soundLookupTable="PawMediumStand2restA_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=15;
				};
				class Stand2restB
				{
					soundLookupTable="PawMediumStand2restB_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=16;
				};
				class Stand2restC
				{
					soundLookupTable="PawMediumStand2restC_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=17;
				};
				class Jump
				{
					soundLookupTable="PawMediumJump_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=18;
				};
				class Impact
				{
					soundLookupTable="PawMediumImpact_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=19;
				};
			};
			class Sounds
			{
				class Red_Fox_Bark
				{
					soundSet="racoon_Calm_soundset";
					noise="WolfRoarNoise";
					id=1;
				};
				class Red_Fox_Death
				{
					soundSet="racoon_Calm_soundset";
					noise="WolfRoarNoise";
					id=2;
				};
				class Red_Fox_Eating
				{
					soundSet="racoon_Calm_soundset";
					noise="WolfRoarNoise";
					id=3;
				};
				class Red_Fox_Funny
				{
					soundSet="racoon_Calm_soundset";
					noise="WolfRoarNoise";
					id=4;
				};
				class Red_Fox_Nervous
				{
					soundSet="racoon_Calm_soundset";
					noise="WolfRoarNoise";
					id=5;
				};
				class Red_Fox_Scared
				{
					soundSet="racoon_Calm_soundset";
					noise="WolfRoarNoise";
					id=6;
				};
				class Red_Fox_Shake
				{
					soundSet="racoon_Calm_soundset";
					noise="WolfRoarNoise";
					id=7;
				};
			};
			class Damages
			{
				class Bite
				{
					damage="WolfBiteDamage";
					id=1;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping=1;
			movementSpeedMapping[]={0,0.25,0.80000001,3,5};
		};
	};
	class geb_RacoonMeat : CowSteakMeat
	{
		scope = 2;
		displayName = "$STR_RacoonMeat";
		descriptionShort = "$STR_RacoonMeatDesc";
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
	};
	class geb_RacoonPelt: BearPelt
	{
		scope=2;
		displayName="$STR_RacoonPelt";
		descriptionShort="$STR_RacoonPeltDesc";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\racoon\racoonpelt.paa";
		};
	};
	class geb_RacoonTail: BearPelt
	{
		scope=2;
		displayName="$STR_RacoonTail";
		descriptionShort="$STR_RacoonTailDesc";
		model = "\gebsanimals\data\fauna\racoon\geb_racoontail.p3d";
	};

	class Clothing_Base;
	class geb_RacoonSkinCap: Clothing_Base
	{
		descriptionShort="$STR_RacoonSkinCapDesc";
		displayName="$STR_RacoonSkinCap";
		scope=2;
		model = "\gebsanimals\data\fauna\racoon\geb_racoonskincap_g.p3d";
		repairableWithKits[]={2,3,5,8};
		repairCosts[]={25,25,25,25};
		rotationFlags=2;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=470;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.25;
		noMask=0;
				class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Pith_Helmet\Data\PithHelmet.rvmat",
								"Pith_Helmet\Data\PithHelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Pith_Helmet\Data\PithHelmet.rvmat",
								"Pith_Helmet\Data\PithHelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Pith_Helmet\Data\PithHelmet_damage.rvmat",
								"Pith_Helmet\Data\PithHelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Pith_Helmet\Data\PithHelmet_damage.rvmat",
								"Pith_Helmet\Data\PithHelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Pith_Helmet\Data\PithHelmet_destruct.rvmat",
								"Pith_Helmet\Data\PithHelmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\gebsanimals\data\fauna\racoon\geb_racoonskincap_m.p3d";
			female="\gebsanimals\data\fauna\racoon\geb_racoonskincap_f.p3d";
		};
	};

	//Wolf Skeleton
	class geb_Cheetah : AnimalBase 
	{
			// rebuilt on its vanilla skeleton (tools); every body face is in camo
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\gebsanimals\data\fauna\cheetah\cheetah_co.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"\gebsanimals\data\fauna\cheetah\cheetah.rvmat"
			};
			simulation="dayzanimal";
			scope=2;
			displayName="$STR_Cheetah";
			descriptionShort="$STR_CheetahDesc";
			model = "\gebsanimals\data\fauna\cheetah\geb_cheetah.p3d";
			DamageSphereAmmos[]=
			{
				"MeleeWolf"
			};
			aiAgentTemplate="Predators_Wolf";
			injuryLevels[]={1,0.5,0.2,0};
			class DamageSystem
			{
				class GlobalHealth
				{
					class Health
					{
						hitpoints=200;
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
				class DamageZones
				{
					class Zone_Head
					{
						componentNames[]=
						{
							"Zone_Head"
						};
						transferToZonesNames[]={};
						transferToZonesCoefs[]={};
						fatalInjuryCoef=0.15000001;
						canBleed=0;
						class Health
						{
							hitpoints=120;
							transferToGlobalCoef=1;
						};
						class Blood: Health
						{
							hitpoints=0;
						};
						class Shock: Health
						{
							hitpoints=0;
						};
					};
					class Zone_Neck: Zone_Head
					{
						componentNames[]=
						{
							"Zone_Neck"
						};
						transferToZonesNames[]={};
						transferToZonesCoefs[]={};
						fatalInjuryCoef=0.050000001;
						class Health: Health
						{
							hitpoints=100;
						};
					};
					class Zone_Chest: Zone_Head
					{
						componentNames[]=
						{
							"Zone_Chest"
						};
						transferToZonesNames[]={};
						transferToZonesCoefs[]={};
						fatalInjuryCoef=0.050000001;
						class Health: Health
						{
							hitpoints=150;
						};
					};
					class Zone_Belly: Zone_Head
					{
						componentNames[]=
						{
							"Zone_Belly"
						};
						transferToZonesNames[]={};
						transferToZonesCoefs[]={};
						fatalInjuryCoef=0.050000001;
						class Health: Health
						{
							hitpoints=150;
						};
					};
					class Zone_Spine: Zone_Head
					{
						componentNames[]=
						{
							"Zone_Spine_Front",
							"Zone_Spine_Back"
						};
						transferToZonesNames[]={};
						transferToZonesCoefs[]={};
						fatalInjuryCoef=0.050000001;
						class Health: Health
						{
							hitpoints=150;
						};
					};
					class Zone_Pelvis: Zone_Head
					{
						componentNames[]=
						{
							"Zone_Pelvis"
						};
						transferToZonesNames[]=
						{
							"Zone_Spine"
						};
						transferToZonesCoefs[]={0.5};
						fatalInjuryCoef=0.050000001;
						class Health: Health
						{
							hitpoints=180;
						};
					};
					class Zone_Legs: Zone_Head
					{
						componentNames[]=
						{
							"Zone_Legs_Front",
							"Zone_Legs_Back"
						};
						transferToZonesNames[]={};
						transferToZonesCoefs[]={};
						fatalInjuryCoef=0;
						class Health: Health
						{
							hitpoints=100;
						};
					};
				};
			};
			class Skinning
			{
				class ObtainedSteaks
				{
					item="geb_CheetahMeat";
					count=10;
					itemZones[]=
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"
					};
					countByZone[]={3,3,3};
					quantityMinMaxCoef[]={0.5,1};
				};
				class ObtainedPelt
				{
					item="geb_CheetahPelt";
					count=1;
					itemZones[]=
					{
						"Zone_Chest",
						"Zone_Belly"
					};
					quantityCoef=1;
					transferToolDamageCoef=1;
				};
				class ObtainedGuts
				{
					item="Guts";
					count=2;
					quantityMinMaxCoef[]={0.5,0.80000001};
				};
				class ObtainedLard
				{
					item="Lard";
					count=1;
					quantityMinMaxCoef[]={0.5,1};
				};
				class ObtainedBones
				{
					item="Bone";
					count=1;
					quantityMinMaxCoef[]={0.69999999,1};
					transferToolDamageCoef=1;
				};
			};
			class enfanimsys
			{
				meshObject="dz\animals\canis_lupus\Data\canis_lupus_skeleton.xob";
				graphname="dz\animals\animations\!graph_files\Wolf\Wolf_Graph.agr";
				defaultinstance="dz\animals\animations\!graph_files\Wolf\Wolf_AnimInstance.asi";
				startnode="AlignToTerrain_Rot";
				skeletonName="canis_lupus_skeleton.xob";
			};
			class AnimEvents
			{
				class Steps
				{
					class Walk1
					{
						soundLookupTable="PawMediumWalk_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=1;
					};
					class Walk2
					{
						soundLookupTable="PawMediumWalk_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=2;
					};
					class Walk3
					{
						soundLookupTable="PawMediumWalk_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=3;
					};
					class Walk4
					{
						soundLookupTable="PawMediumWalk_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=4;
					};
					class Run1
					{
						soundLookupTable="PawMediumRun_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=5;
					};
					class Run2
					{
						soundLookupTable="PawMediumRun_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=6;
					};
					class Run3
					{
						soundLookupTable="PawMediumRun_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=7;
					};
					class Run4
					{
						soundLookupTable="PawMediumRun_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=8;
					};
					class Bodyfall
					{
						soundLookupTable="PawMediumBodyfall_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=11;
					};
					class Settle
					{
						soundLookupTable="PawMediumSettle_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=12;
					};
					class Rest2standA
					{
						soundLookupTable="PawMediumRest2standA_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=13;
					};
					class Rest2standB
					{
						soundLookupTable="PawMediumRest2standB_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=14;
					};
					class Stand2restA
					{
						soundLookupTable="PawMediumStand2restA_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=15;
					};
					class Stand2restB
					{
						soundLookupTable="PawMediumStand2restB_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=16;
					};
					class Stand2restC
					{
						soundLookupTable="PawMediumStand2restC_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=17;
					};
					class Jump
					{
						soundLookupTable="PawMediumJump_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=18;
					};
					class Impact
					{
						soundLookupTable="PawMediumImpact_LookupTable";
						noise="WolfStepNoise";
						effectSet[]=
						{
							"WolfStepEffect1",
							"WolfStepEffect2"
						};
						id=19;
					};
				};
				class Sounds
				{
					class WolfBark
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=1;
					};
					class WolfBark_1
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=61;
					};
					class WolfBark_2
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=71;
					};
					class WolfBark2
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=2;
					};
					class WolfBark3
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=3;
					};
					class WolfBreath
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=4;
					};
					class WolfGroans
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=5;
					};
					class WolfGrowl_A
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=6;
					};
					class WolfGrowl_B
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=7;
					};
					class WolfGrowl
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=8;
					};
					class WolfPant
					{
						soundSet="WolfPant_SoundSet";
						noise="WolfRoarNoise";
						id=9;
					};
					class WolfPantShort
					{
						soundSet="WolfPantShort_SoundSet";
						noise="WolfRoarNoise";
						id=10;
					};
					class WolfPantLong
					{
						soundSet="WolfPantShort_SoundSet";
						noise="WolfRoarNoise";
						id=18;
					};
					class WolfSnarl
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=11;
					};
					class WolfSnarlShort
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=12;
					};
					class WolfWhimper
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=13;
					};
					class WolfYelp
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=14;
					};
					class WolfYawn
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=15;
					};
					class WolfDeath
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=20;
					};
					class WolfHowl
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=16;
					};
					class WolfHowls
					{
						soundSet="cheetah_Calm_soundset";
						noise="WolfRoarNoise";
						id=17;
					};
				};
				class Damages
				{
					class Bite
					{
						damage="WolfBiteDamage";
						id=1;
					};
					class BiteLow
					{
						damage="WolfLowBiteDamage";
						id=2;
					};
				};
			};
			class CommandMoveSettings
			{
				useSpeedMapping=1;
				movementSpeedMapping[]={0,0.25,0.5,1.2,4.5,12.2};
			};
			class CommandLookAtSettings
			{
				lookAtFilterTimeout=0.5;
				lookAtFilterSpeed=1.5700001;
			};
	};
	class geb_CheetahMeat : CowSteakMeat
	{
		scope = 2;
		displayName = "$STR_CheetahMeat";
		descriptionShort = "$STR_CheetahMeatDesc";
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
	};
	class geb_CheetahPelt: BearPelt
	{
		scope=2;
		displayName="$STR_CheetahPelt";
		descriptionShort="$STR_CheetahPeltDesc";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\cheetah\cheetahpelt.paa";
		};
	};

	//Bears
	class geb_BlackbearPelt: BearPelt
	{
		scope=2;
		displayName="$STR_BlackbearPelt";
		descriptionShort="$STR_BlackbearPeltDesc";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\bears\ursus_arctos\blackbear_pelt_co.paa",
		};
	};
	class geb_PolarbearPelt: BearPelt
	{
		scope=2;
		displayName="$STR_PolarbearPelt";
		descriptionShort="$STR_PolarbearPeltDesc";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\bears\ursus_arctos\polarbear_pelt_co.paa"
		};
	};
	class geb_PandabearPelt: BearPelt
	{
		scope=2;
		displayName="$STR_PandabearPelt";
		descriptionShort="$STR_PandabearPeltDesc";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\gebsanimals\data\fauna\bears\ursus_arctos\panda_pelt_co.paa"
		};
	};
};
