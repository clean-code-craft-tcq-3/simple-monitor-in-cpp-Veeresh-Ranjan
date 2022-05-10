#include "BatteryManagementSystem.h"
class BatteryMgmtSystmForCharging : public BatteryManagemtSystem
{
public:
    void sendAlert(){
        //stop charging and Beep sound
    }
    bool monitorTemparature(){
        while(getTemperature() >= TEMPERATURE_LOWER_LIMIT && getTemperature() <= TEMPERATURE_UPPER_LIMIT);
        cout << "Temperature out of range!\n";
        sendAlert();
        return false;
    }
    bool monitorSoc(){
        while(getSoc() >= SOC_LOWER_LIMIT && getSoc() <= SOC_UPPER_LIMIT);
        cout << "State of Charge out of range!\n";
        sendAlert();
        return false;
    }
    bool monitorChargeRate(){
        while(getChargeRate() <= CHARGE_RATE_UPPER_LIMIT);
        cout << "Charge Rate out of range!\n";
        sendAlert();
        return false;
    }
};
