const int RESISTER_PIN = 0;
const char ON_MESSAGE[] = "ON"; 
const char OFF_MESSAGE[] = "OFF";
const int THRESHOLD = 2;
const int ERROR = 10;

int turn = 0;
boolean on = false;

void setup() {
  Serial.begin(9600); 
} 

void loop() { 
  turn = analogRead(RESISTER_PIN);
  
  if(!on && turn > THRESHOLD + ERROR ){
    Serial.println(ON_MESSAGE); 
    on = true;
  }

  if(on && turn <= THRESHOLD){
        Serial.println(OFF_MESSAGE); 
        on = false;
  }
  
}

