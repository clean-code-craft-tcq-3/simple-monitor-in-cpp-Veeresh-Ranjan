#include"BMSForCharging.h"

class BatteryMgmtSystmTest : public BatteryManagemtSystem
{
public:
    BatteryMgmtSystmTest(float temperature, float soc, float chargeRate):BatteryManagemtSystem(temperature,soc,chargeRate)
    {}
    bool monitorTemparature(){
        if(!isValueInRange(getTemperature(),TEMPERATURE_UPPER_LIMIT,TEMPERATURE_LOWER_LIMIT)) {
            return false;
        }
        return true;
    }
    bool monitorSoc(){
        if(!isValueInRange(getSoc(),SOC_UPPER_LIMIT,SOC_LOWER_LIMIT)) {
            return false;
        }
        return true;
    }
    bool monitorChargeRate(){
        if(!isValueInRange(getChargeRate(),CHARGE_RATE_UPPER_LIMIT,0)) {
            return false;
        }
        return true;
    }
    bool monitorTemparatureForWarning(){
        if(!isValueInRange(getTemperature(),getWarningUpper(TEMPERATURE_UPPER_LIMIT),getWarningLower(TEMPERATURE_UPPER_LIMIT,TEMPERATURE_LOWER_LIMIT))) {
            return false;
        }
        return true;
    }
    bool monitorSocForWarning(){
        if(!isValueInRange(getSoc(),getWarningUpper(SOC_UPPER_LIMIT),getWarningLower(SOC_UPPER_LIMIT,SOC_LOWER_LIMIT))) {
            return false;
        }
        return true;
    }
    bool monitorChargeRateForWarning(){
        if(!isValueInRange(getChargeRate(),getWarningUpper(CHARGE_RATE_UPPER_LIMIT),getWarningLower(CHARGE_RATE_UPPER_LIMIT,0))) {
            return false;
        }
        return true;
    }
};


