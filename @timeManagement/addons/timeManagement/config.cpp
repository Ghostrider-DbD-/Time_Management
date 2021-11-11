/*
	for ghostridergaming
	By Ghostrider [GRG]
	Copyright 2016
	
	--------------------------
	License
	--------------------------
	All the code and information provided here is provided under an Attribution Non-Commercial ShareAlike 4.0 Commons License.

	http://creativecommons.org/licenses/by-nc-sa/4.0/	
*/

class CfgPatches {
	class timeManagement {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgTimeManagement {
	version = "0.01";
	build = "0.1";
	buildDate = "11-11-20";
};
class CfgFunctions {
	class TM {
		class functions {
			file = "timeManagement\init";
			class init {
				postInit = 1;
			};
			class time {};
		};
	};
};

class CfgTime {
	startTime = 8;
	daytimeAccel = 1;
	nighttimeAccel = 12;
	eveningaccel = 8;
};
