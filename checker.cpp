#include"checker.h"

int main() {
  cout<<"Battery Instance 1"<<endl;
  checker checkerObj(new BatteryMgmtSystmTest(45, 20, 0.8));
  assert(checkerObj.checkTemperature()==true);
  assert(checkerObj.checkSoc()==true);
  assert(checkerObj.checkChargeRate()==true);
  assert(checkerObj.batteryIsOk()==true);
  cout<<"Battery Instance 2"<<endl;
  checkerObj.setParam(-1, -10, -0.9);
  assert(checkerObj.checkTemperature()==false);
  assert(checkerObj.checkSoc()==false);
  assert(checkerObj.checkChargeRate()==false);
  assert(checkerObj.batteryIsOk()==false);
  cout<<"Battery Instance 3"<<endl;
  checkerObj.setParam(55, 85, 0.9);
  assert(checkerObj.checkTemperature()==false);
  assert(checkerObj.checkSoc()==false);
  assert(checkerObj.checkChargeRate()==false);
  assert(checkerObj.batteryIsOk()==false);
  cout<<"Battery Instance 4"<<endl;
  checkerObj.setParam(0, 80, 0);
  assert(checkerObj.checkTemperature()==true);
  assert(checkerObj.checkSoc()==true);
  assert(checkerObj.checkChargeRate()==true);
  assert(checkerObj.batteryIsOk()==true);
  cout<<"Battery Instance 5"<<endl;
  cout<<"Battery Instance 5"<<endl;
  checkerObj.setParam(42.75, 75, 0.76);
  assert(checkerObj.checkTempWarning()==true);
  assert(checkerObj.checkSocWarning()==true);
  assert(checkerObj.checkChargeRateWarning()==true);
  cout<<"Battery Instance 6"<<endl;
  checkerObj.setParam(2.25, 25, 0.04);
  assert(checkerObj.checkTempWarning()==true);
  assert(checkerObj.checkSocWarning()==true);
  assert(checkerObj.checkChargeRateWarning()==true);
  cout<<"Battery Instance 7"<<endl;
  checkerObj.setParam(2, 78, 0.78);
  assert(checkerObj.checkTempWarning()==false);
  assert(checkerObj.checkSocWarning()==false);
  assert(checkerObj.checkChargeRateWarning()==false);
  cout<<"Battery Instance 8"<<endl;
  checkerObj.setParam(-1, -20, -0.5);
  assert(checkerObj.checkTempWarning()==false);
  assert(checkerObj.checkSocWarning()==false);
  assert(checkerObj.checkChargeRateWarning()==false);
  cout<<"Battery Instance 9"<<endl;
  checkerObj.setParam(43, 21, 0.01);
  assert(checkerObj.checkTempWarning()==false);
  assert(checkerObj.checkSocWarning()==false);
  assert(checkerObj.checkChargeRateWarning()==false);

}

