int gasSensor = A0;   
int buzzer = 10;      
int redLED = 9;      
int greenLED = 8;    
int threshold = 400;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(gasSensor,INPUT);
  Serial.begin(9600);
}

void loop() {
  int gasLevel = analogRead(gasSensor);
  Serial.print("Gas Level:   ");
  Serial.println(gasLevel);

  if (gasLevel > threshold) { 
    tone(buzzer, 1000); 
    digitalWrite(redLED, HIGH); 
    digitalWrite(greenLED, LOW); 
    Serial.println("WARNING!");

  } else {
    noTone(buzzer); 
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH); 
  }

  delay(500); 
}