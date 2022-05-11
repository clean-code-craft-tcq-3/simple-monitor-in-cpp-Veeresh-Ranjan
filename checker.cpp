#include"checker.h"

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
  checker checkerObj3(new BatteryMgmtSystmTest(15, 60, 0.9));
  checkerObj3.checkTemperature();
  checkerObj3.checkSoc();
  checkerObj3.checkChargeRate();
  checkerObj3.batteryIsOk();
}

