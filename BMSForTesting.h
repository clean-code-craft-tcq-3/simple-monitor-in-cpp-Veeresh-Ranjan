#include"BMSForCharging.h"

class BatteryMgmtSystmTest : public BatteryManagemtSystem
{
public:
    BatteryMgmtSystmTest(int temperature, int soc, float chargeRate):BatteryManagemtSystem(temperature,soc,chargeRate)
    {}
    bool monitorTemparature(){
        if(!isValueInRange(getTemperature(),TEMPERATURE_UPPER_LIMIT,TEMPERATURE_LOWER_LIMIT)) {
            cout << "Temperature out of range!\n";
            return false;
        }
        return true;
    }
    bool monitorSoc(){
        if(!isValueInRange(getSoc(),SOC_UPPER_LIMIT,SOC_LOWER_LIMIT)) {
            cout << "State of Charge out of range!\n";
            return false;
        }
        return true;
    }
    bool monitorChargeRate(){
        if(!isValueInRange(getChargeRate(),CHARGE_RATE_UPPER_LIMIT,0)) {
            cout << "Charge Rate out of range!\n";
            return false;
        }
        return true;
    }
};


