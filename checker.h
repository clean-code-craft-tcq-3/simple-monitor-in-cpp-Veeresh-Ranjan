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
    bool batteryIsOk(){
        batteryOk = checkTemperature() && checkSoc();
        batteryOk = checkSoc() && checkChargeRate();
        batteryOk = checkChargeRate() && checkTemperature();
        if (!batteryOk){
            cout<<"Battery is NOT OK"<<endl;
            return false;
        }
        return true;
    }
};
