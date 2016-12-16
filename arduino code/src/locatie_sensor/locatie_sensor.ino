#include "antenna.h"
void setup(){
  antennaBegin();
}

void loop(){
  IncommingByte=antennaInput();
  anntennaOutput(IncommingByte);
}
