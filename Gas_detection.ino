int gasSensorPin = A0;    
int redLedPin = 9;         
int greenLedPin = 8;       
int buzzerPin = 10;        
int gasThreshold = 400;   

void setup() {
    Serial.begin(9600);

    pinMode(redLedPin, OUTPUT);
    pinMode(greenLedPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
    pinMode(gasSensorPin, INPUT);
}

void loop() {
    int gasValue = analogRead(gasSensorPin);

    Serial.print("gas_value = "int gasSensorPin = A0;    
int redLedPin = 9;         
int greenLedPin = 8;       
int buzzerPin = 10;        
int gasThreshold =500 ;   

void setup() {
    Serial.begin(9600);

    pinMode(redLedPin, OUTPUT);
    pinMode(greenLedPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
    pinMode(gasSensorPin, INPUT);
}

void loop() {
    int gasValue =int gasSensorPin = A0;    
int redLedPin = 9;         
int greenLedPin = 8;       
int buzzerPin = 10;        
int gasThreshold = 450;   

void setup() {
    Serial.begin(9600);

    pinMode(redLedPin, OUTPUT);
    pinMode(greenLedPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
    pinMode(gasSensorPin, INPUT);
}

void loop() {
    int gasValue = analogRead(gasSensorPin);

    Serial.print("gas_value = "int gasSensorPin = A0;    
int redLedPin = 9;         
int greenLedPin = 8;       
int buzzerPin = 10;        
int gasThreshold =500 ;   

void setup() {
    Serial.begin(9600);

    pinMode(redLedPin, OUTPUT);
    pinMode(greenLedPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
    pinMode(gasSensorPin, INPUT);
}

void loop() {
    int gasValue = analogRead(gasSensorPin);

    Serial.print("gas_value = ");
    Serial.println(gasValue);

    if (gasValue > gasThreshold) {
        Serial.println("WARNING GAS LEAK");
        tone(buzzerPin, 1000);
        digitalWrite(redLedPin, HIGH);
        digitalWrite(greenLedPin, LOW);
    } else {
        noTone(buzzerPin);
        digitalWrite(redLedPin, LOW);
        digitalWrite(greenLedPin, HIGH);
    }

    delay(1000);
} analogRead(gasSensorPin);

    Serial.print("gas_value = ");
    Serial.println(gasValue);

    if (gasValue > gasThreshold) {
        Serial.println("WARNING GAS LEAK");
        tone(buzzerPin, 1000);
        digitalWrite(redLedPin, HIGH);
        digitalWrite(greenLedPin, LOW);
    } else {
        noTone(buzzerPin);
        digitalWrite(redLedPin, LOW);
        digitalWrite(greenLedPin, HIGH);
    }

    delay(1000);
}
