#include <AFMotor.h>


char input;

AF_DCMotor claw(3);
AF_DCMotor wrist(2);
AF_DCMotor elbow(4);
AF_DCMotor shoulder(1);

int left1 = 16;
int left2 = 17;
int right1 = 18;
int right2 = 19;

void forward();
void reverse();
void left();
void right();
void mstop();
void setup()
{
  Serial.begin(9600);  //Set the baud rate to your Bluetooth module.
  claw.setSpeed(255);
  wrist.setSpeed(100);
  elbow.setSpeed(255);
  shoulder.setSpeed(255);
  claw.run(RELEASE);
  wrist.run(RELEASE);
  elbow.run(RELEASE);
  shoulder.run(RELEASE);
  pinMode(left1, OUTPUT);
  pinMode(left2, OUTPUT);
  pinMode(right1, OUTPUT);
  pinMode(right2, OUTPUT);
}

void loop() {
  if (Serial.available() > 0)
    input = Serial.read();
  Serial.print(input);
  Serial.print("\n");

  switch (input)
  { case 'F': forward(); break;
    case 'R': reverse(); break;
    case 'r': right(); break;
    case 'l': left(); break;

    case 'C': claw.run(BACKWARD);        break;
    case 'c': claw.run(FORWARD);        break;
    case 'W': wrist.run(FORWARD);      break;
    case 'w': wrist.run(BACKWARD);       break;
    case 'S': elbow.run(FORWARD);        break;
    case 's': elbow.run(BACKWARD);       break;
    case 'E': shoulder.run(FORWARD);       break;
    case 'e': shoulder.run(BACKWARD);        break;

    default:
      claw.run(RELEASE);
      wrist.run(RELEASE);
      elbow.run(RELEASE);
      shoulder.run(RELEASE);
      mstop();


  }


}

void mstop()
{
  digitalWrite(left1, 0);
  digitalWrite(left2, 0);
  digitalWrite(right1, 0);
  digitalWrite(right2, 0);
}
void left()
{ digitalWrite(left1, 0);   // Left motor Reverse
  digitalWrite(left2, 1);
  digitalWrite(right1, 1);   // Right motor Reverse
  digitalWrite(right2, 0);
}
void right()
{ digitalWrite(left1, 1);
  digitalWrite(left2, 0);
  digitalWrite(right1, 0);
  digitalWrite(right2, 1);
}
void forward()
{ digitalWrite(left1, 1);
  digitalWrite(left2, 0);
  digitalWrite(right1, 1);
  digitalWrite(right2, 0);
}
void reverse()
{ digitalWrite(left1, 0);
  digitalWrite(left2, 1);
  digitalWrite(right1, 0);
  digitalWrite(right2, 1);
}
