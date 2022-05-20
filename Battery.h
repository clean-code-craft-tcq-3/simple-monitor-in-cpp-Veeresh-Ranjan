#include <assert.h>
#include <iostream>
#include "Language.h"

#define TEMPERATURE_LOWER_LIMIT 0
#define TEMPERATURE_UPPER_LIMIT 45
#define SOC_UPPER_LIMIT 80
#define SOC_LOWER_LIMIT 20
#define CHARGE_RATE_UPPER_LIMIT 0.8

using namespace std;

class Battery{
    float temperature,soc;
    float chargeRate;
public:
    Battery(float temperature, float soc, float chargeRate){
        this->temperature = temperature;
        this->soc = soc;
        this->chargeRate = chargeRate;
    }
    void setParam(float temperature, float soc, float chargeRate){
        this->temperature = temperature;
        this->soc = soc;
        this->chargeRate = chargeRate;
    }
    float getSoc(){
        return this->soc;
    }
    float getChargeRate(){
        return this->chargeRate;
    }
    float getTemperature(){
        return this->temperature;
    }
};

