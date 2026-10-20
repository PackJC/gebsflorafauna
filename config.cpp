class CfgPatches
{
	class gebsanimals
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Scripts",
			"DZ_Animals_Bliss",
			"DZ_Animals"
		};
	};
};
class CfgMods
{
	class gebsanimals
	{
		dir="gebsanimals";
		picture="gebsanimals\data\logo.paa";			// picture in expanded description
		logoSmall="gebsanimals\data\logo.paa";			// icon next to mod name when description is not expanded
		logo="gebsanimals\data\logo.paa";				// logo below game menu
		logoOver="gebsanimals\data\logo_hover.paa";	// logo hovered (CfgMods reads logoOver, as mod.cpp does)
		overview="Geb's Animals: 15 new wildlife species for DayZ";	// keep in step with mod.cpp's overview
		action="";
		name="Geb's Animals";
		// Without this the engine looks for gebsanimals/Anims/cfg/skeletons.anim.xml
		// and logs "ANIMATION (E): Can't load ..." on every start; point it at vanilla's.
		skeletonDefinitions="DZ/anims/cfg/skeletons.anim.xml";
		credits="DayZ Modding Community";
		author="Geb";
		authorID="0";
		version="2.0.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"gebsanimals/scripts"
				};
			};
		};
	};
};
