#include"BMSForTesting.h"
class checker{
    bool batteryOk;
    BatteryManagemtSystem* bmsPtr;
public:
    checker(BatteryManagemtSystem* bmsPtr){
        this->bmsPtr = bmsPtr;
    }
    void setParam(float temperature, float soc, float chargeRate){
        this->bmsPtr->setParam(temperature, soc, chargeRate);
    }
    bool checkTemperature(){
        return bmsPtr->monitorTemparature();
    }
    bool checkSoc(){
        return bmsPtr->monitorSoc();
    }
    bool checkChargeRate(){
        return bmsPtr->monitorChargeRate();
    }
    bool checkTempWarning(){
        return bmsPtr->monitorTemparatureForWarning();
    }
    bool checkSocWarning(){
        return bmsPtr->monitorSocForWarning();
    }
    bool checkChargeRateWarning(){
        return bmsPtr->monitorChargeRateForWarning();
    }
    bool checkBattery(){
        batteryOk = checkTemperature() && checkSoc() && checkChargeRate();
        return batteryOk;
    }
    bool batteryIsOk(){
        if (!checkBattery()){
            print(BATTERY_NOK);
            return false;
        }
        return true;
    }
    void print(string message){
        cout<<message<<endl;
    }
};
