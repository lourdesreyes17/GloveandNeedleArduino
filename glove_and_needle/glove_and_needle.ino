// Vibration pins
int dot_pins[8] = { 13, 12, 11, 10, 9, 6, 5, 4 };
int pwm_power = 150;  // out of 255
int pwm_power_low = 0; 

// ----------- Arduino -----------
void setup() {
  // initialize serial communication:
  Serial.begin(9600);
}

void loop() {
  // Wait for user input
  while (Serial.available() == 0){ }

  //After user input
  int sequenceChoice = Serial.parseInt();

  switch (sequenceChoice) {
    case 1:
      analogWrite(dot_pins[1], pwm_power);
      delay(1000);
    case 2:
      analogWrite(dot_pins[2], pwm_power);
      delay(1000);
    case 3:
      analogWrite(dot_pins[3], pwm_power);
      delay(1000);
    case 4:
      analogWrite(dot_pins[4], pwm_power);
      delay(1000);
    case 9:
      analogWrite(dot_pins[1], pwm_power_low);
      analogWrite(dot_pins[2], pwm_power_low);
      analogWrite(dot_pins[3], pwm_power_low);
      analogWrite(dot_pins[4], pwm_power_low);
      analogWrite(dot_pins[5], pwm_power_low);
      analogWrite(dot_pins[6], pwm_power_low);
      analogWrite(dot_pins[7], pwm_power_low);
      analogWrite(dot_pins[8], pwm_power_low);
      
  }
}
