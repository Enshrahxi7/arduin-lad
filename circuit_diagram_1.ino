// Define button input pins
const int button1 = 5;   
const int button2 = 6;   
const int button3 = 7;

// Define LED output pins
const int led1 = 10;      
const int led2 = 11;      
const int led3 = 12;     

void setup() {
  // Set button pins as INPUT
  pinMode(button1, INPUT);  
  pinMode(button2, INPUT);  
  pinMode(button3, INPUT);  

  // Set LED pins as OUTPUT
  pinMode(led1, OUTPUT);    
  pinMode(led2, OUTPUT);    
  pinMode(led3, OUTPUT);    
}

void loop() {
  // Read button 1 state and control LED 1
  if (digitalRead(button1)== HIGH) {
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(led1, LOW);
  }

  // Read button 2 state and control LED 2
  if (digitalRead(button2)== HIGH) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }

  // Read button 3 state and control LED 3
  if (digitalRead(button3)== HIGH) {
    digitalWrite(led3, HIGH);
  } else {
    digitalWrite(led3, LOW);
  }
} 