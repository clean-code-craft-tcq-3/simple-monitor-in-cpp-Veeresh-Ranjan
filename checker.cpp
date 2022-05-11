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
}

