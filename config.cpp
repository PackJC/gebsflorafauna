class CfgPatches
{
	class gebsflorafauna
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
	class gebsflorafauna
	{
		dir="gebsflorafauna";
		picture="gebsflorafauna/logo.png";
		action="";
		hideName=1;
		hidePicture=1;
		name="gebsflorafauna";
		// Without this the engine looks for gebsflorafauna/Anims/cfg/skeletons.anim.xml
		// and logs "ANIMATION (E): Can't load ..." on every start; point it at vanilla's.
		skeletonDefinitions="DZ/anims/cfg/skeletons.anim.xml";
		credits="DayZ Modding Community";
		author="Geb";
		authorID="0";
		version="1.0";
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
					"gebsflorafauna/scripts"
				};
			};

		};
	};

};
