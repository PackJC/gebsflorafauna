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
	class cheetah_Calm_soundset
	{
		soundShaders[]=
		{
			"cheetah_OnHit"
		};
		sound3DProcessingType="infected3DProcessingType";
		volumeCurve="infectedAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class cheetah_Attack_soundset
	{
		soundShaders[] =
		{
			"cheetah_Attack"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class cheetah_Agr_soundset
	{
		soundShaders[] =
		{
			"cheetah_Agr"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class cheetah_Soundset
	{
		soundShaders[] =
		{
			"cheetah_Run"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class cheetah_Onhit_soundset
	{
		soundShaders[] =
		{
			"cheetah_OnHit"
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
	class cheetah_Attack
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			}
		};
		volume=0.30000001;
		range=44;
	};
	class cheetah_Onhit
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};


	class cheetah_Agr
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			}
		};
		volume = 1.4400001;
		range = 120;
	};
	class cheetah_Calm
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class cheetah_Run
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\cheetah\sounds\cheetah1",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
