// Defining macros
// #define redPin 3
// #define yellowPin 5
// #define greenPin 7

// This turned out to be a better idea to simplify the pin configuration process
const int pinsArr[] = {3, 5, 7};

// Method stub to change voltage of an individual pin
void changeColor(int, int, int = 1000);

void setup() {
  // Original way of configuring the pins
  // pinMode(redPin, OUTPUT);
  // pinMode(yellowPin, OUTPUT);
  // pinMode(greenPin, OUTPUT);

  // Better way to setup the pins for output
  for(int i = 0; i < sizeof(pinsArr); i++) {
    pinMode(pinsArr[i], OUTPUT);
  }
}

void loop() {
  // Original way of changing voltage for each pin
  // digitalWrite(pinsArr[0], HIGH);
  // delay(1000);
  // digitalWrite(pinsArr[1], HIGH);
  // delay(1000);
  // digitalWrite(pinsArr[2], HIGH);
  // delay(1000);

  // Setting all pins to 5V
  // for(int i = 0; i < sizeof(pinsArr); i++) {
  //   digitalWrite(pinsArr[i], HIGH);
  //   delay(1000);
  // }

  // Actually executing the traffic light code
  for(int i = 0; i < sizeof(pinsArr); i++) {
    if (i == 1) 
      changeColor(pinsArr[i], 1000);
    
    else 
      changeColor(pinsArr[i], 3000);
    
  }
}

/*
* Function that changes a pin from high to low with a delay after each high and low setting
*
* @params: pin - the pin that is connected
* @params: firstDelay - the first delay after setting voltage to HIGH
* @params: secondDelay - the second delay after setting voltage to LOW
*/
void changeColor(int pin, int firstDelay, int secondDelay = 1000) {
  digitalWrite(pin, HIGH);
  delay(firstDelay);
  digitalWrite(pin, LOW);
  delay(secondDelay);
}