#include"BMSForTesting.h"
class checker{
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
        if(checkTemperature() && checkSoc() && checkChargeRate())
            return true;
        else{
            cout<<"Battery is NOT OK"<<endl;
            return false;
        }
    }
};
