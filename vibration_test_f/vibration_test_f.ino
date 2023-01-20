// Vibration pins
int vsa = 10;
int vsb = 11;
int vsc = 9;
int vsd = 5;
int vse = 4;
int vsf = 6;

int pwm_power = 150;  // out of 255
int pwm_power_low = 0;
int delay_time = 300;
// ----------- Arduino -----------
void setup() {
  Serial.begin(9600);  // opens serial port, sets data rate to 9600 bps
}

void loop() {

  //wait for user input
  while (Serial.available() == 0) { }

  int sequenceChoice = Serial.parseInt();

  switch (sequenceChoice) {
    case 1: // Right
      analogWrite(vse, pwm_power);
      delay(delay_time);
      break; 
    case 2: // Left
      analogWrite(vsd, pwm_power);
      delay(delay_time);
      break;
    case 3: //Up
      analogWrite(vsc, pwm_power);
      delay(delay_time);
      analogWrite(vsb, pwm_power);
      delay(delay_time);
      analogWrite(vsa, pwm_power);
      delay(delay_time);
      break;
    case 4: // Down  
      analogWrite(vsa, pwm_power);
      delay(delay_time);
      analogWrite(vsb, pwm_power);
      delay(delay_time);
      analogWrite(vsc, pwm_power);
      delay(delay_time);
      break;
  }

  analogWrite(vsa, pwm_power_low);
  analogWrite(vsb, pwm_power_low);
  analogWrite(vsc, pwm_power_low);
  analogWrite(vsd, pwm_power_low);
  analogWrite(vse, pwm_power_low);
  analogWrite(vsf, pwm_power_low);
}
