
class CfgTimeSettings {
    date[] = {};  //  setDate [1986, 2, 25, 16, 0];  //(4:00pm February 25, 1986)

    time[] = {};  //  See btes from the BIS wiki below 
    /*
    yntax:
    datetime call BIS_fnc_paramDaytime 
Parameters:
    datetime: Number or Array - (Optional, default daytime):

        Number - day hour. This will set the hour in the same day (unless 23 < hour < 0).
        Float numbers are floored
        Array - daytime format: [year, month, day, hour, minute]
*/

    accel[] = {};
};