#include <AFMotor.h>
 
 // create motor #2, 64KHz pwm
AF_DCMotor motorFOUR(4);
AF_DCMotor motorTWO(2);
AF_DCMotor motorTHREE(3);
 
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps

  
  motorFOUR.setSpeed(155);     // set the speed to 200/255
  motorTWO.setSpeed(155);
  motorTHREE.setSpeed(155);
}
 
void loop() {
  Serial.print("tick");
  
  motorFOUR.run(FORWARD);      // turn it on going forward
  //delay(1000);
 
  //motorONE.run(BACKWARD);     // the other way
  //delay(1000);
  

  //motorONE.run(RELEASE);      // stopped
  //delay(1000);

  
  motorTHREE.run(BACKWARD);      // turn it on going forward
  

  //motorTHREE.run(FORWARD);      // turn it on going forward
}
