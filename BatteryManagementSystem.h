#include "Battery.h"
class BatteryManagemtSystem : public Battery
{
public:
    BatteryManagemtSystem(float temperature, float soc, float chargeRate):Battery(temperature,soc,chargeRate)
    {}
    virtual bool monitorTemparature() = 0;
    virtual bool monitorSoc() = 0;
    virtual bool monitorChargeRate() = 0;
    virtual bool monitorTemparatureForWarning() = 0;
    virtual bool monitorSocForWarning() = 0;
    virtual bool monitorChargeRateForWarning() = 0;
    virtual bool isValueInRange(float value, float upperLimit, float lowerLimit){
        if (value > upperLimit || value < lowerLimit)
            return false;
        return true;
    }
    float getWarningUpper(float value){
        return value - (0.05 * value);
    }
    float getWarningLower(float upperValue, float lowerValue){
        return lowerValue + (0.05 * upperValue);
    }
};

