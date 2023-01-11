// Vibration pins
int vsa = 10;
int vsb = 11;
int vsc = 9;
int vsd = 5;
int vse = 4;
int vsf = 6;
//int vs7 = 5;
//int vs8 = 3;
int pwm_power = 150;  // out of 255
int pwm_power_low = 0;
int input = 0;  // for incoming serial data
int delay_time = 300;
// ----------- Arduino -----------
void setup() {
  Serial.begin(9600);  // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // print to vibration motors
  // one side at a time

  //wait for user input
  while (Serial.available() == 0) {
    /*
      analogWrite(vsa, pwm_power_low);
      analogWrite(vsb, pwm_power_low);
      analogWrite(vsc, pwm_power_low);
      analogWrite(vsd, pwm_power_low);
      analogWrite(vse, pwm_power_low);
      analogWrite(vsf, pwm_power_low);
      analogWrite(vs7, pwm_power_low);
      analogWrite(vs8, pwm_power_low);
    */
  }
  analogWrite(vsa, pwm_power_low);
  analogWrite(vsb, pwm_power_low);
  analogWrite(vsc, pwm_power_low);
  analogWrite(vsd, pwm_power_low);
  analogWrite(vse, pwm_power_low);
  analogWrite(vsf, pwm_power_low);


  int sequenceChoice = Serial.parseInt();
   //char sequenceChoice = Serial.read();

  switch (sequenceChoice) {
    case 1: // Left
      analogWrite(vse, pwm_power);
      delay(delay_time);
      analogWrite(vsc, pwm_power);
      delay(delay_time);
      analogWrite(vsd, pwm_power);
      delay(delay_time);
      break;
    case 2: // Right
      analogWrite(vsd, pwm_power);
      delay(delay_time);
      analogWrite(vsc, pwm_power);
      delay(delay_time);
      analogWrite(vse, pwm_power);
      delay(delay_time);
      break;
    case 3: //Forward
      analogWrite(vsa, pwm_power);
      delay(delay_time);
      analogWrite(vsb, pwm_power);
      delay(delay_time);
      analogWrite(vsc, pwm_power);
      delay(delay_time);
      break;
    case 4: // Back
      analogWrite(vsc, pwm_power);
      delay(delay_time);
      analogWrite(vsb, pwm_power);
      delay(delay_time);
      analogWrite(vsa, pwm_power);
      delay(delay_time);
      break;
      /*
        case 5: //Up
        analogWrite(vs7, pwm_power);
        delay(delay_time);
        analogWrite(vsb, pwm_power);
        delay(delay_time);
        case 6: //Down
        analogWrite(vsb, pwm_power);
        delay(delay_time);
        analogWrite(vs7, pwm_power);
        delay(delay_time);
        case 9: // Test pins
        analogWrite(vsa, pwm_power);
      */
  }

  analogWrite(vsa, pwm_power_low);
  analogWrite(vsb, pwm_power_low);
  analogWrite(vsc, pwm_power_low);
  analogWrite(vsd, pwm_power_low);
  analogWrite(vse, pwm_power_low);
  analogWrite(vsf, pwm_power_low);
  //analogWrite(vs7, pwm_power_low);
  //analogWrite(vs8, pwm_power_low);
}
