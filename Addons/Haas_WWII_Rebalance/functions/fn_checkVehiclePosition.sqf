/*
 * Author: ACRE2Team & Wilhelm Haas
 * Description: Returns the vehicle seat of the given unit
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Unit <OBJECT>
 *
 * Return value:
 * String of position
 *
 * Example:
 * [vehicle player, player] call Haas_WWII_Rebalance_fnc_checkVehiclePosition;
 *
 * Public: No
 */

params ["_vehicle", "_unit", "_fullCrew", "_role", "_rolePrep"];

_fullCrew = fullCrew [_vehicle, "", true];
_role = "";

{
    if (_unit isEqualTo (_x select 0)) then {
        _rolePrep = toLower (_x select 1);

        if (isTurnedOut _unit) exitWith {
            _role = format ["turnedout_%1", _rolePrep];
        };

        if (_rolePrep  in ["driver", "gunner", "commander"]) exitWith {
            _role = format ["%1", _rolePrep];
        };

        if (_rolePrep in ["cargo", "turret"]) then {
            if (_rolePrep isEqualTo "cargo") then {
                _role = format ["%1_%2", _rolePrep, _x select 2];
            } else {
                _role = format ["%1_%2", _rolePrep, _x select 3 select 0];
            };
        };
    };
} forEach _fullCrew;

_role
