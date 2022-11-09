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
	class baseAnimal_SoundSet;
	class TurkeyChick_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyChick_SoundShader"
		};
	};
	class TurkeyCluck_A_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_A_SoundShader"
		};
	};
	class TurkeyCluck_A_High_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_A_High_SoundShader"
		};
	};
	class TurkeyCluck_B_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_B_SoundShader"
		};
	};
	class TurkeyCluck_B_High_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_B_High_SoundShader"
		};
	};
	class TurkeyCluck_C_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_C_SoundShader"
		};
	};
	class TurkeyCluck_C_High_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_C_High_SoundShader"
		};
	};
	class TurkeyCluck_D_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_D_SoundShader"
		};
	};
	class TurkeyCluck_D_High_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_D_High_SoundShader"
		};
	};
	class TurkeyCluck_E_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_E_SoundShader"
		};
	};
	class TurkeyCluck_E_High_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_E_High_SoundShader"
		};
	};
	class TurkeyCluck_X_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_X_SoundShader"
		};
	};
	class TurkeyCluck_Silky_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_Silky_SoundShader"
		};
	};
	class TurkeyCluck_Silky_High_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCluck_Silky_High_SoundShader"
		};
	};
	class TurkeyCrow_A_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCrow_A_SoundShader"
		};
	};
	class TurkeyCrow_B_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCrow_B_SoundShader"
		};
	};
	class TurkeyCrow_C_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCrow_C_SoundShader"
		};
	};
	class TurkeyCrow_D_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCrow_D_SoundShader"
		};
	};
	class TurkeyCrow_E_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCrow_E_SoundShader"
		};
	};
	class TurkeyCrow_F_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCrow_F_SoundShader"
		};
	};
	class TurkeyCrow_G_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyCrow_G_SoundShader"
		};
	};
	class TurkeyScream_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"TurkeyScream_SoundShader"
		};
	};

		class BirdFlapping_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"BirdFlapping_SoundShader"
		};
	};
	class BirdFlapping_short_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"BirdFlapping_short_SoundShader"
		};
	};
	class BirdFlapping_mid_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"BirdFlapping_mid_SoundShader"
		};
	};
	class BirdFlapping_long_SoundSet: baseAnimal_SoundSet
	{
		soundShaders[]=
		{
			"BirdFlapping_long_SoundShader"
		};
	};
};



class CfgSoundShaders
{
	class TurkeyChick_SoundShader
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_A_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_A_High_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_B_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_B_High_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
			
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_C_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_C_High_SoundShader
	{
		samples[]=
		{
			
			{
				"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
			"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_D_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_D_High_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_E_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_E_High_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_X_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_Silky_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.3548134;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCluck_Silky_High_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.3548134;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCrow_A_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCrow_B_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCrow_C_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCrow_D_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCrow_E_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCrow_F_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCrow_G_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyScream_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			},
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=0.56234133;
		range=60;
		rangeCurve="defaultAnimalAttenuationCurve";
	};

	class TurkeyCrowX1_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=2.2387211;
		range=80;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TurkeyCrowX1_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume=3.9810717;
		range=400;
		rangeCurve[]=
		{
			{0,0},
			{300,0.1},
			{350,0.5},
			{400,1}
		};
	};
	class TurkeyCrowX1_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=360;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{360,1}
		};
	};
	class TurkeyCrowX1_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=360;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{360,1}
		};
	};
	class TurkeyCrowX1_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class TurkeyCrowX1_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=360;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{360,1}
		};
	};
	class TurkeyCrowX1_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
"gebsflorafauna\data\fauna\turkey\sounds\gobble",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=360;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{360,1}
		};
	};
};
