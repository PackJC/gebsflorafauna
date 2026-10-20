class CfgPatches
{
	class gebsanimals_sounds_giraffe
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
	class giraffe_Calm_soundset
	{
		soundShaders[]=
		{
			"giraffe_OnHit"
		};
		sound3DProcessingType="infected3DProcessingType";
		volumeCurve="infectedAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class giraffe_Attack_soundset
	{
		soundShaders[] =
		{
			"giraffe_Attack"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class giraffe_Agr_soundset
	{
		soundShaders[] =
		{
			"giraffe_Agr"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class giraffe_Soundset
	{
		soundShaders[] =
		{
			"giraffe_Run"
		};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class giraffe_Onhit_soundset
	{
		soundShaders[] =
		{
			"giraffe_OnHit"
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
	class giraffe_Attack
	{
		samples[]=
		{
			
			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			}
		};
		volume=0.30000001;
		range=44;
	};
	class giraffe_Onhit
	{
		samples[]=
		{
			
			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},
			
			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},
			
			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},
			
			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};


	class giraffe_Agr
	{
		samples[] =
		{

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			}
		};
		volume = 1.4400001;
		range = 120;
	};
	class giraffe_Calm
	{
		samples[] =
		{

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class giraffe_Run
	{
		samples[] =
		{

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			},

			{
				"gebsanimals\data\fauna\giraffe\sounds\giraffe1",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
