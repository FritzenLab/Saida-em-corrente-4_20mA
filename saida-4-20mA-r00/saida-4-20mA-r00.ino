
#define analogOutput 9    // LED connected to digital pin 9
#define analogRef A0  // Analog input pin that the potentiometer is attached to

int intOutput = 51;
int analogRefValue = 255;

void setup() {
  analogWrite(analogOutput, intOutput);
}

void loop() {

  analogRefValue= analogRead(analogRef);
  intOutput = map(analogRefValue, 0, 1023, 30, 255);
  analogWrite(analogOutput, intOutput);
  delay(100); 
   
  }

