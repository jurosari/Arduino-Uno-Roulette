
int led_2 = 2;
int led_3 = 3;
int led_4 = 4;
int led_5 = 5;
int led_6 = 6;
int led_7 = 7;
int led_8 = 8;
int led_9 = 9;

int button = 10;




void setup() {
  // put your setup code here, to run once:

  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
  pinMode(led_8, OUTPUT);
  pinMode(led_9, OUTPUT);
  pinMode(button, INPUT_PULLUP); //INPUT_PULLUP activates an internal 20–50kΩ resistor inside the Arduino that connects the pin to 5V.
  //pinMode(button, INPUT_PULLUP);//With no button pressed, the pin is connected to HIGH

}


void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == LOW){ //If button is pressed
    digitalWrite(led_2, HIGH);
    digitalWrite(led_3, HIGH);
    digitalWrite(led_4, HIGH);
    digitalWrite(led_5, HIGH);
    digitalWrite(led_6, HIGH);
    digitalWrite(led_7, HIGH);
    digitalWrite(led_8, HIGH);
    digitalWrite(led_9, HIGH);
   
  
  }if(digitalRead(button) == HIGH){
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, LOW);
    digitalWrite(led_4, LOW);
    digitalWrite(led_5, LOW);
    digitalWrite(led_6, LOW);
    digitalWrite(led_7, LOW);
    digitalWrite(led_8, LOW);
    digitalWrite(led_9, LOW);
  }

}
