#include <F:\werk\bedrijf\projecten\locatie meter\arduino code\src\lib\wireles.h>
char send_code[]={0x01,0x00,0x00,0x00,0x00,0x00}; //{serialnumber,position,extra,extra,extra,extra}
int select = 0;
int counter = 0;
void setup()
{
  //Wireles.Connect();
  Serial.begin(9600);

}

void loop()
{
  if (select == HIGH) {
    counter =+0x01;
    send_code[2]=counter;
    Wireles.Send(send_code,sizeof(send_code));
  }

}

