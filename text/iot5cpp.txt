#define LED1_PIN 7
#define LED2_PIN 22
#define LED3_PIN 23

void setup() {
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED1_PIN,HIGH);
  delay(200); // Delay of 200 milliseconds
  digitalWrite(LED1_PIN, LOW);
  
  digitalWrite(LED2_PIN, HIGH);
  delay(200);
  digitalWrite(LED2_PIN, LOW);

  digitalWrite(LED3_PIN, HIGH);
  delay(200);
  digitalWrite(LED3_PIN, LOW);
}
