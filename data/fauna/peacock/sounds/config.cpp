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
	class peacock_Calm_soundset
	{
		soundShaders[]=
		{
			"peacock_OnHit"
		};
		sound3DProcessingType="infected3DProcessingType";
		volumeCurve="infectedAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class peacock_Attack_soundset
	{
		soundShaders[] =
		{
			"peacock_Attack"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class peacock_Agr_soundset
	{
		soundShaders[] =
		{
			"peacock_Agr"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class peacock_Soundset
	{
		soundShaders[] =
		{
			"peacock_Run"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class peacock_Onhit_soundset
	{
		soundShaders[] =
		{
			"peacock_OnHit"
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
	class peacock_Attack
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			}
		};
		volume=0.30000001;
		range=44;
	};
	class peacock_Onhit
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};


	class peacock_Agr
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			}
		};
		volume = 1.4400001;
		range = 120;
	};
	class peacock_Calm
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class peacock_Run
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\peacock\sounds\peacock1",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
