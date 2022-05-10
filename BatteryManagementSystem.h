#include <assert.h>
#include <iostream>

#define TEMPERATURE_LOWER_LIMIT 0
#define TEMPERATURE_UPPER_LIMIT 45
#define SOC_UPPER_LIMIT 80
#define SOC_LOWER_LIMIT 20
#define CHARGE_RATE_UPPER_LIMIT 0.8

using namespace std;
class Battery{
    int temperature,soc,chargeRate;
public:
    Battery(int temperature, int soc, int chargeRate){
        this->temperature = temperature;
        this->soc = soc;
        this->chargeRate = chargeRate;
    }
    int getSoc(){
        return this->soc;
    }
    int getChargeRate(){
        return this->chargeRate;
    }
    int getTemperature(){
        return this->temperature;
    }
};

class BatteryManagemtSystem : public Battery
{
public:
    BatteryManagemtSystem(int temperature, int soc, int chargeRate):Battery(temperature,soc,chargeRate){}
    virtual bool monitorTemparature() = 0;
    virtual bool monitorSoc() = 0;
    virtual bool monitorChargeRate() = 0;
};

