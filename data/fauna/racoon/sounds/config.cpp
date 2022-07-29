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
	class racoon_Calm_soundset
	{
		soundShaders[]=
		{
			"racoon_OnHit"
		};
		sound3DProcessingType="infected3DProcessingType";
		volumeCurve="infectedAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class racoon_Attack_soundset
	{
		soundShaders[] =
		{
			"racoon_Attack"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class racoon_Agr_soundset
	{
		soundShaders[] =
		{
			"racoon_Agr"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class racoon_Soundset
	{
		soundShaders[] =
		{
			"racoon_Run"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class racoon_Onhit_soundset
	{
		soundShaders[] =
		{
			"racoon_OnHit"
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
	class racoon_Attack
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			}
		};
		volume=0.30000001;
		range=44;
	};
	class racoon_Onhit
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};


	class racoon_Agr
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			}
		};
		volume = 1.4400001;
		range = 120;
	};
	class racoon_Calm
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class racoon_Run
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\racoon\sounds\racoon1",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
