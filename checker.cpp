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
        cout<<"Battery is NOT OK"<<endl;
        return false;
    }
};

int main() {
  checker checkerObj(new BatteryMgmtSystmTest(25, 70, 0.7));
  checkerObj.checkTemperature();
  checkerObj.checkSoc();
  checkerObj.checkChargeRate();
  checkerObj.batteryIsOk();
  checker checkerObj2(new BatteryMgmtSystmTest(50, 85, 0));
  checkerObj2.checkTemperature();
  checkerObj2.checkSoc();
  checkerObj2.checkChargeRate();
  checkerObj2.batteryIsOk();
}

