// Vibration pins
int dot_pins[8] = { 13, 12, 11, 10, 9, 6, 5, 4 };
int pwm_power = 150;  // out of 255
int pwm_power_low = 0; 

// ----------- Arduino -----------
void setup() {
}

void loop() {
  // print to vibration motors
  // one side at a time
  analogWrite(dot_pins[1], pwm_power);
  analogWrite(dot_pins[2], pwm_power);
  analogWrite(dot_pins[3], pwm_power);
  analogWrite(dot_pins[4], pwm_power);
  analogWrite(dot_pins[5], pwm_power);
  analogWrite(dot_pins[6], pwm_power);
  analogWrite(dot_pins[7], pwm_power);
  analogWrite(dot_pins[8], pwm_power);
  delay(1000);  // leave one column on for 1 second
  refresh();
}

// Set all of the solonoid dots to LOW
void refresh() {
  analogWrite(dot_pins[1], pwm_power_low);
  analogWrite(dot_pins[2], pwm_power_low);
  analogWrite(dot_pins[3], pwm_power_low);
  analogWrite(dot_pins[4], pwm_power_low);
  analogWrite(dot_pins[5], pwm_power_low);
  analogWrite(dot_pins[6], pwm_power_low);
  analogWrite(dot_pins[7], pwm_power_low);
  analogWrite(dot_pins[8], pwm_power_low);
  }
