#include "BatteryManagementSystem.h"
class BatteryMgmtSystmForCharging : public BatteryManagemtSystem
{
public:
    void sendAlert(){
        //stop charging and Beep sound
    }
    bool monitorTemparature(){
        if(!isValueInRange(getTemperature(),TEMPERATURE_UPPER_LIMIT,TEMPERATURE_LOWER_LIMIT))
        {
            cout << "Temperature out of range!\n";
            sendAlert();
            return false;
        }
    }
    bool monitorSoc(){
        if(!isValueInRange(getSoc(),SOC_UPPER_LIMIT,SOC_LOWER_LIMIT))
        {
            cout << "State of Charge out of range!\n";
            sendAlert();
            return false;
        }
    }
    bool monitorChargeRate(){
        if(!isValueInRange(getChargeRate(),CHARGE_RATE_UPPER_LIMIT,0))
        {
            cout << "Charge Rate out of range!\n";
            sendAlert();
            return false;
        }
    }
};
