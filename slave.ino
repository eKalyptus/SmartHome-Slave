#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

  Serial.begin(9600);
  
  mySwitch.enableTransmit(10);

  mySwitch.setProtocol(1);
  
}

void loop() {

  while(Serial.available()){
    int ser = Serial.parseInt();
    if(ser == 1){
      mySwitch.send(16765268, 24);
    }else if(ser == 0){
      mySwitch.send(16765265, 24);
    }
  }

  delay(100);

}
