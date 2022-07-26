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
	class Alien_Calm_soundset
	{
		soundShaders[]=
		{
			"Alien_OnHit"
		};
		sound3DProcessingType="infected3DProcessingType";
		volumeCurve="infectedAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class Alien_Attack_soundset
	{
		soundShaders[] =
		{
			"Alien_Attack"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Alien_Agr_soundset
	{
		soundShaders[] =
		{
			"Alien_Agr"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Alien_Soundset
	{
		soundShaders[] =
		{
			"Alien_Run"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Alien_Onhit_soundset
	{
		soundShaders[] =
		{
			"Alien_OnHit"
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
	class Alien_Attack
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			}
		};
		volume=0.30000001;
		range=44;
	};
	class Alien_Onhit
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};


	class Alien_Agr
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			}
		};
		volume = 1.4400001;
		range = 120;
	};
	class Alien_Calm
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class Alien_Run
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\alien\sounds\Alien",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
