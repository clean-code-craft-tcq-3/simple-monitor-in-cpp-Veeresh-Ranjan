#include"checker.h"

int main() {
  cout<<"Battery 1"<<endl;
  checker checkerObj(new BatteryMgmtSystmTest(45, 20, 0.8));
  checkerObj.checkTemperature();
  checkerObj.checkSoc();
  checkerObj.checkChargeRate();
  checkerObj.batteryIsOk();
  cout<<"Battery 2"<<endl;
  checker checkerObj2(new BatteryMgmtSystmTest(0, 80, 0));
  checkerObj2.checkTemperature();
  checkerObj2.checkSoc();
  checkerObj2.checkChargeRate();
  checkerObj2.batteryIsOk();
  cout<<"Battery 3"<<endl;
  checker checkerObj3(new BatteryMgmtSystmTest(-1, -10, -0.9));
  checkerObj3.checkTemperature();
  checkerObj3.checkSoc();
  checkerObj3.checkChargeRate();
  checkerObj3.batteryIsOk();
  cout<<"Battery 4"<<endl;
  checker checkerObj4(new BatteryMgmtSystmTest(55, 85, 0.9));
  checkerObj4.checkTemperature();
  checkerObj4.checkSoc();
  checkerObj4.checkChargeRate();
  checkerObj4.batteryIsOk();
}

