#include "BatteryManagementSystem.h"
class BatteryMgmtSystmForCharging : public BatteryManagemtSystem
{
public:
    void sendAlert(){
        //stop charging and Beep sound
    }
    void sendWarning(){
        //Warning message
    }
    void printMessage(string message){
        cout<<message<<endl;
    }
    bool monitorTemparature(){
        if(!isValueInRange(getTemperature(),TEMPERATURE_UPPER_LIMIT,TEMPERATURE_LOWER_LIMIT))
        {
            printMessage(TEMP_OUT_OF_RANGE);
            sendAlert();
            return false;
        }
    }
    bool monitorSoc(){
        if(!isValueInRange(getSoc(),SOC_UPPER_LIMIT,SOC_LOWER_LIMIT))
        {
            printMessage(SOC_OUT_OF_RANGE);
            sendAlert();
            return false;
        }
    }
    bool monitorChargeRate(){
        if(!isValueInRange(getChargeRate(),CHARGE_RATE_UPPER_LIMIT,0))
        {
            printMessage(CR_OUT_OF_RANGE);
            sendAlert();
            return false;
        }
    }
    bool monitorTemparatureForWarning(){
        if(!isValueInRange(getTemperature(),getWarningUpper(TEMPERATURE_UPPER_LIMIT),getWarningLower(TEMPERATURE_UPPER_LIMIT,TEMPERATURE_LOWER_LIMIT))) {
            printMessage(TEMP_WARNING);
            sendWarning();
            return false;
        }
        return true;
    }
    bool monitorSocForWarning(){
        if(!isValueInRange(getSoc(),getWarningUpper(SOC_UPPER_LIMIT),getWarningLower(SOC_UPPER_LIMIT,SOC_LOWER_LIMIT))) {
            printMessage(SOC_WARNING);
            sendWarning();
            return false;
        }
        return true;
    }
    bool monitorChargeRateForWarning(){
        if(!isValueInRange(getChargeRate(),getWarningUpper(CHARGE_RATE_UPPER_LIMIT),getWarningLower(CHARGE_RATE_UPPER_LIMIT,0))) {
            printMessage(CR_WARNING);
            sendWarning();
            return false;
        }
        return true;
    }
};
