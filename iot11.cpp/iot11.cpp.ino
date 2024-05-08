const int buzzer = A1;      
const int knockSensor = A1; 
const int threshold = 400;  


int sensorReading = 0;      
void setup() {
    pinMode(buzzer,INPUT);
}

void loop() {
  pinMode(buzzer,INPUT);
  sensorReading = analogRead(knockSensor);
  

  if (sensorReading >= threshold) {
    pinMode(buzzer,OUTPUT);
    tone(buzzer,261);    
   
    delay(200);
    
    noTone(buzzer); 
       
    tone(buzzer,293);             
    delay(200);    
    noTone(buzzer); 
    
    tone(buzzer,329);      
    delay(200);
    noTone(buzzer);     
    
    tone(buzzer,349);    
    delay(200);    
    noTone(buzzer); 
    
    tone(buzzer,392);            
    delay(200);
    noTone(buzzer); 
  }
  delay(100);
}
