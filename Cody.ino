const int buttonPin = 6;
int pinNum = 0;
int buttonState = 0;
int lightState = LOW;
const int lightPin7 = 13;
const int lightPin6 = 12;
const int lightPin5 = 11;
const int lightPin4 = 10;
const int lightPin3 = 9;
const int lightPin2 = 8;
const int lightPin1 = 7;
int lightPin7State = HIGH;
int lightPin6State = HIGH;
int lightPin5State = LOW;
int lightPin4State = LOW;
int lightPin3State = LOW;
int lightPin2State = LOW;
int lightPin1State = LOW;
int userWin = 0;
int timer = 0;
int startTime = 0;
int stopTime = 0;
int randomBlink = 0;


void setup() {
  
  pinMode(lightPin1, OUTPUT);
  pinMode(lightPin2, OUTPUT);
  pinMode(lightPin3, OUTPUT);
  pinMode(lightPin4, OUTPUT);
  pinMode(lightPin5, OUTPUT);
  pinMode(lightPin6, OUTPUT);
  pinMode(lightPin7, OUTPUT);
  pinMode(buttonPin, INPUT);
  
  
  digitalWrite(lightPin1, HIGH);
  digitalWrite(lightPin2, HIGH);
  digitalWrite(lightPin4, LOW);
  digitalWrite(lightPin3, LOW);
  digitalWrite(lightPin5, LOW);
  digitalWrite(lightPin6, LOW);
  digitalWrite(lightPin7, LOW);
}


void loop() 
{
 
  buttonState = digitalRead(buttonPin);

  //This is what it does when the button is pressed
  
  if (buttonState == HIGH) {

    pinNum = random(9, 14);
    
    lightState = digitalRead(pinNum);
    
    if (lightState == HIGH && buttonState == HIGH) 
    {
      digitalWrite(pinNum, LOW);     
    }
    else if (lightState == LOW  && buttonState == HIGH) 
    {
      digitalWrite(pinNum, HIGH);
    }
    
    buttonState = LOW;
    
    lightPin6State = digitalRead(lightPin6);
    lightPin7State = digitalRead(lightPin7);
    lightPin3State = digitalRead(lightPin3);
    lightPin4State = digitalRead(lightPin4);
    lightPin5State = digitalRead(lightPin5);
    
    if (lightPin6State == HIGH && lightPin7State == HIGH && lightPin3State == HIGH && lightPin4State == HIGH && lightPin5State == HIGH) {
      
      tone( 5, 2000, 50);
      delay(50);
      tone( 5, 2100, 50);
      delay(50);
      tone( 5, 2200, 50);
      delay(50);
      tone( 5, 2300, 50);
      delay(50);
      tone( 5, 2400, 50);
      delay(50);
      tone( 5, 2500, 50);
      delay(50);
      digitalWrite(lightPin3, LOW);
      tone( 5, 2600, 50);
      delay(50);
      tone( 5, 2700, 50);
      delay(50);
      digitalWrite(lightPin4, LOW);
      tone( 5, 2800, 50);
      delay(50);
      tone( 5, 2900, 50);
      delay(50);
      digitalWrite(lightPin5, LOW);
      tone( 5, 3000, 50);
      delay(50);
      tone( 5, 3100, 50);
      delay(50);
      digitalWrite(lightPin6, LOW);
      tone( 5, 3200, 50);
      delay(50);
      tone( 5, 3300, 50);
      delay(50);
      digitalWrite(lightPin7, LOW);
      tone( 5, 3400, 50);
      delay(50);
      tone( 5, 3500, 50);
      delay(50);
      tone( 5, 3600, 50);
      delay(50);
      tone( 5, 3700, 50);
      delay(50);
      tone( 5, 3800, 50);
      delay(50);
      tone( 5, 3900, 50);
      delay(50);
      digitalWrite(lightPin3, HIGH);
      tone( 5, 4000, 50);
      delay(50);
      tone( 5, 4100, 50);
      delay(50);
      digitalWrite(lightPin4, HIGH);
      tone( 5, 4200, 50);
      delay(50);
      tone( 5, 4300, 50);
      delay(50);
      digitalWrite(lightPin5, HIGH);
      tone( 5, 4400, 50);
      delay(50);
      tone( 5, 4500, 50);
      delay(50);
      digitalWrite(lightPin6, HIGH);
      tone( 5, 4600, 50);
      delay(50);
      tone( 5, 4700, 50);
      delay(50);
      digitalWrite(lightPin7, HIGH);
      tone( 5, 4800, 50);
      delay(50);
      tone( 5, 4900, 50);
      delay(50);
      tone( 5, 5000, 50);
      
      digitalWrite(lightPin6, LOW);
      digitalWrite(lightPin7, LOW);
      digitalWrite(lightPin4, LOW);
      digitalWrite(lightPin3, LOW);
      digitalWrite(lightPin5, LOW);
    } 
    
    delay(100);
  }
  
  randomBlink = random(1, 101);
  
  if (randomBlink = 100) {
    digitalWrite(lightPin1, HIGH);
    digitalWrite(lightPin2, HIGH);
    
    delay(150);
    
    digitalWrite(lightPin1, LOW);
    digitalWrite(lightPin2, LOW);
    
  }
  
  
}
