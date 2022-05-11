#include"BMSForTesting.h"
class checker{
    bool batteryOk;
    BatteryManagemtSystem* bmsPtr;
public:
    checker(BatteryManagemtSystem* bmsPtr){
        this->bmsPtr = bmsPtr;
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
    bool checkBattery(){
        batteryOk = checkTemperature() && checkSoc() && checkChargeRate();
        return batteryOk;
    }
    bool batteryIsOk(){
        if (!checkBattery()){
            cout<<"Battery is NOT OK"<<endl;
            return false;
        }
        return true;
    }
};
