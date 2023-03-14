// Vibration pins
int vs1 = 11; // 1
int vs2 = 9;  // 2
int vs3 = 10; // 3
int vs4 = 4;  // 4
int vs5 = 6;  // 5
int vs6 = 5;  // 6

int pwm_power = 255;  // out of 255
int pwm_power_low = 0;
int delay_time = 300;
// ----------- Arduino -----------
void setup() {
  Serial.begin(74880);  // opens serial port, sets data rate to 74880 bps
}

void loop() {

  //wait for user input
  while (Serial.available() == 0) { }

  int sequenceChoice = Serial.parseInt();

  switch (sequenceChoice) {
    case 1: // Right
      analogWrite(vs4, pwm_power);
      delay(delay_time);
      analogWrite(vs4, pwm_power_low);
      break;
      
    case 2: // Back  
      analogWrite(vs1, pwm_power);
      delay(delay_time-100);
      analogWrite(vs1, pwm_power_low);
      
      analogWrite(vs2, pwm_power);
      delay(delay_time-100);
      analogWrite(vs2, pwm_power_low);
      
      analogWrite(vs3, pwm_power);
      delay(delay_time-100);
      analogWrite(vs3, pwm_power_low);
      break;
      
    case 3: // Up
      analogWrite(vs6, pwm_power);
      delay(delay_time);
      analogWrite(vs6, pwm_power_low);
      break;

    case 4: // Left
      analogWrite(vs5, pwm_power);
      delay(delay_time);
      analogWrite(vs5, pwm_power_low);
      break; 
      
    case 5: // Forward
      analogWrite(vs3, pwm_power);
      delay(delay_time-100);
      analogWrite(vs3, pwm_power_low);
      
      analogWrite(vs2, pwm_power);
      delay(delay_time-100);
      analogWrite(vs2, pwm_power_low);
      
      analogWrite(vs1, pwm_power);
      delay(delay_time-100);
      analogWrite(vs1, pwm_power_low);
      break;
      
    case 6: // Down
      analogWrite(vs1, pwm_power);
      delay(delay_time);
      analogWrite(vs1, pwm_power_low);
      break;
  }

  analogWrite(vs1, pwm_power_low);
  analogWrite(vs2, pwm_power_low);
  analogWrite(vs3, pwm_power_low);
  analogWrite(vs4, pwm_power_low);
  analogWrite(vs5, pwm_power_low);
  analogWrite(vs6, pwm_power_low);
}
