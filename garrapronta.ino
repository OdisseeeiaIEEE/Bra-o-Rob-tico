#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

char bt='S';
void setup()
{
  Serial.begin(9600);
 
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
  Stop();
}


void loop() {
 
bt=Serial.read();
Serial.println(bt);
if(bt=='F')
{
 forward(); 
}

if(bt=='B')
{
 backward(); 
}

if(bt=='L')
{
 left(); 
}

if(bt=='R')
{
 right(); 
}
if(bt=='G')
{
 ombro1(); 
}
if(bt=='I')
{
 ombro2(); 
}
if(bt=='H')
{
 base1(); 
}
if(bt=='J')
{
 base2(); 
}
if(bt=='S')
{
 Stop(); 
}

}
void forward()
{
     motor1.run(FORWARD);
  motor2.run(RELEASE);
motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void backward()
{
     motor1.run(BACKWARD);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}
void left()
{
  motor1.run(RELEASE);
  motor2.run(FORWARD);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}
void right()
{
  motor1.run(RELEASE);
  motor2.run(BACKWARD);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}
void Stop()
{
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}
void ombro1()
{
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(FORWARD);
  motor4.run(RELEASE);
}
void ombro2()
{
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(BACKWARD);
  motor4.run(RELEASE);
}
void base1()
{
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(FORWARD);
}
void base2()
{
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(BACKWARD);
}
