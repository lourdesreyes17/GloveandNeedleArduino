// Vibration pins
int pin1 = 13
int pin2 = 12
int pin3 = 11
int pin4 = 10 
int pin5 = 9 
int pin6 = 6 
int pin7 = 5 
int pin8 = 4
int pwm_power = 0;  // out of 255
int pwm_power_low = 0;
int input = 0;  // for incoming serial data

// ----------- Arduino -----------
void setup() {
  Serial.begin(9600);  // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // print to vibration motors
  // one side at a time

  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    input = Serial.read();
  }

  if (input = left) {
    analogWrite(pin5, pwm_power);
    delay(100)
      analogWrite(pin2, pwm_power);
    delay(100)
      analogWrite(pin4, pwm_power);
    delay(100)
  }

  if (input = right) {
    analogWrite(pin4, pwm_power);
    delay(100)
      analogWrite(pin2, pwm_power);
    delay(100)
      analogWrite(pin5, pwm_power);
    delay(100)
  }

  if (input = forward) {
    analogWrite(pin3, pwm_power);
    delay(100)
      analogWrite(pin2, pwm_power);
  delay(100)
  analogWrite(pin1, pwm_power);
  delay(100)
}

if (input = backward) {
  analogWrite(pin1, pwm_power);
  delay(100)
    analogWrite(pin2, pwm_power);
  delay(100)
  analogWrite(pin3, pwm_power);
delay(100)
}

if (input = up) {
  analogWrite(pin7, pwm_power);
  delay(100)
    analogWrite(pin2, pwm_power);
  delay(100)
}

if (input = down) {
  analogWrite(pin2, pwm_power);
  delay(100)
    analogWrite(pin7, pwm_power);
  delay(100)
}
}