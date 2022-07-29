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
	class rabbit_Calm_soundset
	{
		soundShaders[]=
		{
			"rabbit_OnHit"
		};
		sound3DProcessingType="infected3DProcessingType";
		volumeCurve="infectedAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class rabbit_Attack_soundset
	{
		soundShaders[] =
		{
			"rabbit_Attack"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class rabbit_Agr_soundset
	{
		soundShaders[] =
		{
			"rabbit_Agr"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class rabbit_Soundset
	{
		soundShaders[] =
		{
			"rabbit_Run"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class rabbit_Onhit_soundset
	{
		soundShaders[] =
		{
			"rabbit_OnHit"
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
	class rabbit_Attack
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			}
		};
		volume=0.30000001;
		range=44;
	};
	class rabbit_Onhit
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};


	class rabbit_Agr
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			}
		};
		volume = 1.4400001;
		range = 120;
	};
	class rabbit_Calm
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class rabbit_Run
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\rabbit\sounds\rabbit1",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
