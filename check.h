#include"checker.h"

void checkTestStub() {
  cout<<"Battery Instance 1"<<endl;
  checker checkerObj(new BatteryMgmtSystmTest(45, 20, 0.8));
  assert(checkerObj.checkTemperature()==true);
  assert(checkerObj.checkSoc()==true);
  assert(checkerObj.checkChargeRate()==true);
  assert(checkerObj.batteryIsOk()==false);
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
  assert(checkerObj.batteryIsOk()==false);
  cout<<"Battery Instance 5"<<endl;
  checkerObj.setParam(42.75, 75, 0.76);
  assert(checkerObj.checkTempWarning()==true);
  assert(checkerObj.checkSocWarning()==true);
  assert(checkerObj.checkChargeRateWarning()==true);
  assert(checkerObj.batteryIsOk()==true);
  cout<<"Battery Instance 6"<<endl;
  checkerObj.setParam(2.25, 25, 0.04);
  assert(checkerObj.checkTempWarning()==true);
  assert(checkerObj.checkSocWarning()==true);
  assert(checkerObj.checkChargeRateWarning()==true);
  assert(checkerObj.batteryIsOk()==true);
  cout<<"Battery Instance 7"<<endl;
  checkerObj.setParam(2, 78, 0.78);
  assert(checkerObj.checkTempWarning()==false);
  assert(checkerObj.checkSocWarning()==false);
  assert(checkerObj.checkChargeRateWarning()==false);
  assert(checkerObj.batteryIsOk()==false);
  cout<<"Battery Instance 8"<<endl;
  checkerObj.setParam(-1, -20, -0.5);
  assert(checkerObj.checkTempWarning()==false);
  assert(checkerObj.checkSocWarning()==false);
  assert(checkerObj.checkChargeRateWarning()==false);
  assert(checkerObj.batteryIsOk()==false);
  cout<<"Battery Instance 9"<<endl;
  checkerObj.setParam(43, 21, 0.01);
  assert(checkerObj.checkTempWarning()==false);
  assert(checkerObj.checkSocWarning()==false);
  assert(checkerObj.checkChargeRateWarning()==false);
  assert(checkerObj.batteryIsOk()==false);
}
void checkCharge(){

  cout<<"Battery Instance 1"<<endl;
  checker checkerObj1(new BatteryMgmtSystmForCharging(45, 20, 0.8));
  assert(checkerObj1.checkTemperature()==true);
  assert(checkerObj1.checkSoc()==true);
  assert(checkerObj1.checkChargeRate()==true);
  assert(checkerObj1.batteryIsOk()==false);
  cout<<"Battery Instance 2"<<endl;
  checkerObj1.setParam(-1, -10, -0.9);
  assert(checkerObj1.checkTemperature()==false);
  assert(checkerObj1.checkSoc()==false);
  assert(checkerObj1.checkChargeRate()==false);
  assert(checkerObj1.batteryIsOk()==false);
  cout<<"Battery Instance 3"<<endl;
  checkerObj1.setParam(55, 85, 0.9);
  assert(checkerObj1.checkTemperature()==false);
  assert(checkerObj1.checkSoc()==false);
  assert(checkerObj1.checkChargeRate()==false);
  assert(checkerObj1.batteryIsOk()==false);
  cout<<"Battery Instance 4"<<endl;
  checkerObj1.setParam(0, 80, 0);
  assert(checkerObj1.checkTemperature()==true);
  assert(checkerObj1.checkSoc()==true);
  assert(checkerObj1.checkChargeRate()==true);
  assert(checkerObj1.batteryIsOk()==false);
  cout<<"Battery Instance 5"<<endl;
  checkerObj1.setParam(42.75, 75, 0.76);
  assert(checkerObj1.checkTempWarning()==true);
  assert(checkerObj1.checkSocWarning()==true);
  assert(checkerObj1.checkChargeRateWarning()==true);
  assert(checkerObj1.batteryIsOk()==true);
  cout<<"Battery Instance 6"<<endl;
  checkerObj1.setParam(2.25, 25, 0.04);
  assert(checkerObj1.checkTempWarning()==true);
  assert(checkerObj1.checkSocWarning()==true);
  assert(checkerObj1.checkChargeRateWarning()==true);
  assert(checkerObj1.batteryIsOk()==true);
  cout<<"Battery Instance 7"<<endl;
  checkerObj1.setParam(2, 78, 0.78);
  assert(checkerObj1.checkTempWarning()==false);
  assert(checkerObj1.checkSocWarning()==false);
  assert(checkerObj1.checkChargeRateWarning()==false);
  assert(checkerObj1.batteryIsOk()==false);
  cout<<"Battery Instance 8"<<endl;
  checkerObj1.setParam(-1, -20, -0.5);
  assert(checkerObj1.checkTempWarning()==false);
  assert(checkerObj1.checkSocWarning()==false);
  assert(checkerObj1.checkChargeRateWarning()==false);
  assert(checkerObj1.batteryIsOk()==false);
  cout<<"Battery Instance 9"<<endl;
  checkerObj1.setParam(43, 21, 0.01);
  assert(checkerObj1.checkTempWarning()==false);
  assert(checkerObj1.checkSocWarning()==false);
  assert(checkerObj1.checkChargeRateWarning()==false);
  assert(checkerObj1.batteryIsOk()==false);

}


