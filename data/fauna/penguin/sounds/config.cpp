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
	class penguin_Calm_soundset
	{
		soundShaders[]=
		{
			"penguin_OnHit"
		};
		sound3DProcessingType="infected3DProcessingType";
		volumeCurve="infectedAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class penguin_Attack_soundset
	{
		soundShaders[] =
		{
			"penguin_Attack"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class penguin_Agr_soundset
	{
		soundShaders[] =
		{
			"penguin_Agr"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class penguin_Soundset
	{
		soundShaders[] =
		{
			"penguin_Run"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class penguin_Onhit_soundset
	{
		soundShaders[] =
		{
			"penguin_OnHit"
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
	class penguin_Attack
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			}
		};
		volume=0.30000001;
		range=44;
	};
	class penguin_Onhit
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};


	class penguin_Agr
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			}
		};
		volume = 1.4400001;
		range = 120;
	};
	class penguin_Calm
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class penguin_Run
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\penguin\sounds\penguin1",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
