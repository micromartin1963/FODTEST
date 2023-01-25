class CfgPatches
{
	class FODTEST
	{
		requiredAddons[] = {"DZ_Data"};
	};
};



class CfgModels
{
	class fogtest
	{
		type = "mod";
		sections[] = {"enter"};
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"FODTEST/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"FODTEST/scripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"FODTEST/scripts/5_Mission"};
			};
		};		


	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class land_fodtest: HouseNoDestruct
	{
		scope = 2;
		//hiddenSelections[] = {"enter"};
		model = "FODTEST\data\fodtest.p3d";

		class UserActions 
		{
			class use_this 
			{
				displayName = "Buy a RevoCola refreshment";		// The action appearing in the dropdown in-game				
				memory = "user";				// Name of the memory LOD point to which the action is bound
				radius = 2;								// how far from the memory LOD point the action will appear.
				//onlyForPlayer = 0;
				//condition = "(alive this)"
			//	statement = "this execVM ""\rev_gatts_vending\scripts\fn_buycoke.sqf"";"; //execute the script and dispense a coke.
			};

        };


	};
};