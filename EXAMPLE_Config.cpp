// Add the override for ExileClient_object_vehicle_interaction_show to your CfgExileCustomCode.
class CfgExileCustomCode 
{
	ExileClient_object_vehicle_interaction_show = "Exile_Client_Overrides\ExileClient_object_vehicle_interaction_show.sqf";
};


// Add this in your CfgInteractionMenus.
class Tank
{
    targetType = 2;
    target = "Tank";
    class Actions 
    {
        class ClaimVehicle: ExileAbstractAction
        {
            title = "Claim Ownership";
            condition = "call ExileClient_object_vehicle_interaction_show";
            action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
        };
    };
};
class Car
{
    targetType = 2;
    target = "Car";
    class Actions 
    {
        class ClaimVehicle: ExileAbstractAction
        {
            title = "Claim Ownership";
            condition = "call ExileClient_object_vehicle_interaction_show";
            action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
        };
    };
};
class Air
{
    targetType = 2;
    target = "Air";
    class Actions 
    {
        class ClaimVehicle: ExileAbstractAction
        {
            title = "Claim Ownership";
            condition = "call ExileClient_object_vehicle_interaction_show";
            action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
        };
    };
};
class Boat
{
    targetType = 2;
    target = "Boat";
    class Actions 
    {
        class ClaimVehicle: ExileAbstractAction
        {
            title = "Claim Ownership";
            condition = "call ExileClient_object_vehicle_interaction_show";
            action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
        };
    };
};
