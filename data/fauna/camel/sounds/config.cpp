class CfgPatches
{
	class gebsanimals_sounds_camel
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
	class camel_Calm_soundset
	{
		soundShaders[]=
		{
			"camel_OnHit"
		};
		sound3DProcessingType="infected3DProcessingType";
		volumeCurve="infectedAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class camel_Attack_soundset
	{
		soundShaders[] =
		{
			"camel_Attack"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class camel_Agr_soundset
	{
		soundShaders[] =
		{
			"camel_Agr"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class camel_Soundset
	{
		soundShaders[] =
		{
			"camel_Run"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class camel_Onhit_soundset
	{
		soundShaders[] =
		{
			"camel_OnHit"
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
	class camel_Attack
	{
		samples[]=
		{
			
			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			}
		};
		volume=0.30000001;
		range=44;
	};
	class camel_Onhit
	{
		samples[]=
		{
			
			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},
			
			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},
			
			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},
			
			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};


	class camel_Agr
	{
		samples[] =
		{

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			}
		};
		volume = 1.4400001;
		range = 120;
	};
	class camel_Calm
	{
		samples[] =
		{

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class camel_Run
	{
		samples[] =
		{

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\camel\sounds\camel1",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
