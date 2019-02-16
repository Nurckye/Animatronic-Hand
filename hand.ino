#include <Servo.h>

Servo mic;
Servo inel;
Servo mijl;
Servo arat;
Servo mare;
int data=0;

void setup() {

  mic.attach(11);
  inel.attach(10);
  mijl.attach(9);
  arat.attach(6);
  mare.attach(5);
  Serial.begin(9600);
}


int deget=0; //1 mare b , 2arat, 3 mijl, 4 inel, 5 mic
int pos, pos_intermediar;
void loop() {  
 if(Serial.available() > 0){    
   data = Serial.read();   
  
   deget= data/50+1;
   pos_intermediar=data%50;
   pos=map(pos_intermediar,0,49,10,170);
   if(deget==1)
      mare.write(pos);
   if(deget==2)
      arat.write(pos);
   if(deget==3)
      mijl.write(pos);
   if(deget==4)
      inel.write(170-pos);
   if(deget==5)
      mic.write(170-pos);
   Serial.println(data);
  // Serial.print(' ');
  // Serial.print(deget);
  //Serial.print(' ');
   //Serial.println(pos);
  //Serial.println(8);
 }
}
