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
	class Chimp_Calm_soundset
	{
		soundShaders[]=
		{
			"Chimp_OnHit"
		};
		sound3DProcessingType="infected3DProcessingType";
		volumeCurve="infectedAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class Chimp_Attack_soundset
	{
		soundShaders[] =
		{
			"Chimp_Attack"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Chimp_Agr_soundset
	{
		soundShaders[] =
		{
			"Chimp_Agr"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Chimp_Soundset
	{
		soundShaders[] =
		{
			"Chimp_Run"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Chimp_Onhit_soundset
	{
		soundShaders[] =
		{
			"Chimp_OnHit"
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
	class Chimp_Attack
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			}
		};
		volume=0.30000001;
		range=44;
	};
	class Chimp_Onhit
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};


	class Chimp_Agr
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			}
		};
		volume = 1.4400001;
		range = 120;
	};
	class Chimp_Calm
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class Chimp_Run
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\chimp\sounds\chimp",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
