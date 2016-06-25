const int KNOCK_PIN = 0;
const int MIN_KNOCK = 10;
const char[] KNOCK_MESSAGE = "KNOCK"; 

int knock = 0;

void setup() {
  Serial.begin(9600); 
} 

void loop() { 

  knock = analogRead(KNOCK_PIN);
    
  if(knock > MIN_KNOCK){
    Serial.print(KNOCK_MESSAGE); 
    delay(500);
  }
  
}

