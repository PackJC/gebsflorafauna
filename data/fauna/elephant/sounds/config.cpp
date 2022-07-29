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
	class elephant_Calm_soundset
	{
		soundShaders[]=
		{
			"elephant_OnHit"
		};
		sound3DProcessingType="infected3DProcessingType";
		volumeCurve="infectedAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class elephant_Attack_soundset
	{
		soundShaders[] =
		{
			"elephant_Attack"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class elephant_Agr_soundset
	{
		soundShaders[] =
		{
			"elephant_Agr"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class elephant_Soundset
	{
		soundShaders[] =
		{
			"elephant_Run"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class elephant_Onhit_soundset
	{
		soundShaders[] =
		{
			"elephant_OnHit"
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
	class elephant_Attack
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			}
		};
		volume=0.30000001;
		range=44;
	};
	class elephant_Onhit
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};


	class elephant_Agr
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			}
		};
		volume = 1.4400001;
		range = 120;
	};
	class elephant_Calm
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class elephant_Run
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			},

			{
				"gebsflorafauna\data\fauna\elephant\sounds\elephant1",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
