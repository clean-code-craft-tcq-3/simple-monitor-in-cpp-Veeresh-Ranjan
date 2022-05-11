#include"BMSForCharging.h"

class BatteryMgmtSystmTest : public BatteryManagemtSystem
{
public:
    BatteryMgmtSystmTest(int temperature, int soc, float chargeRate):BatteryManagemtSystem(temperature,soc,chargeRate)
    {}
    bool monitorTemparature(){
        if(getTemperature() < TEMPERATURE_LOWER_LIMIT || getTemperature() > TEMPERATURE_UPPER_LIMIT) {
            cout << "Temperature out of range!\n";
            return false;
        }
        return true;
    }
    bool monitorSoc(){
        if(getSoc() < SOC_LOWER_LIMIT || getSoc() > SOC_UPPER_LIMIT) {
            cout << "State of Charge out of range!\n";
            return false;
        }
        return true;
    }
    bool monitorChargeRate(){
        if(getChargeRate() > CHARGE_RATE_UPPER_LIMIT) {
            cout << "Charge Rate out of range!\n";
            return false;
        }
        return true;
    }
};


