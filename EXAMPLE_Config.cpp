class Tank
{
    targetType = 2;
    target = "Tank";
    class Actions 
    {
        class ClaimVehicle: ExileAbstractAction
        {
            title = "Claim Ownership";
            condition = "true";
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
            condition = "true";
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
            condition = "true";
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
            condition = "true";
            action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
        };
    };
};