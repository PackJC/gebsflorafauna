class CfgPatches
{
	class DZ_Sounds_Effects
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Vehicles_Wheeled"
		};
	};
};
class CfgSoundSets
{
	class kck_grombleAttack_soundset
	{
		soundShaders[]=
		{
			"kck_grombleOnHit"
		};
		sound3DProcessingType="infected3DProcessingType";
		volumeCurve="infectedAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};
};
class CfgSoundShaders
{
	class kck_grombleAttack
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			}
		};
		volume=0.30000001;
		range=44;
	};
	class kck_grombleonhit
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			},
			
			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			}
		};
		volume=0.2;
		range=44;
	};


	class kck_grombleAgr
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			}
		};
		volume = 1.4400001;
		range = 120;
	};
	class kck_gromble_Calm
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			}
		};
		volume = 0.40000001;
		range = 65;
	};
	class kck_grombleRun
	{
		samples[] =
		{

			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			},

			{
				"gebsflorafauna\data\chimp\sounds\chimp",
				0.80000001
			},

			{
				"kck_gromble\sounds\vz9",
				0.80000001
			},

			{
				"kck_gromble\sounds\vz10",
				0.80000001
			}
		};
		volume = 0.1;
		range = 33;
	};
};
