class CfgPatches
{
	class DZ_Sounds_Effects
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgSoundSets
{
	class Turkey_Soundset
	{
		soundShaders[] =
		{
			"Turkey_Calm"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Turkey_Onhit_soundset
	{
		soundShaders[] =
		{
			"Turkey_OnHit"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};

class CfgSoundShaders
{
	class Turkey_Onhit
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};
	class Turkey_Calm
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class Turkey_Run
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
