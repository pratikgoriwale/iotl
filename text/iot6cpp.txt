#define LED1_PIN 7
#define LED2_PIN 22
#define LED3_PIN 23

int number = 0;

void setup() {
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
}

void loop() {
  delay(200); // Delay of 200 milliseconds
  
  if (number <= 100) {
    digitalWrite(LED1_PIN, LOW);
    digitalWrite(LED2_PIN, HIGH);
    digitalWrite(LED3_PIN, HIGH);
  } else if (number > 101 && number <= 200) {
    digitalWrite(LED1_PIN, HIGH);
    digitalWrite(LED2_PIN, HIGH);
    digitalWrite(LED3_PIN, LOW);
  } else if (number > 201 && number <= 300) {
    digitalWrite(LED1_PIN, HIGH);
    digitalWrite(LED2_PIN, LOW);
    digitalWrite(LED3_PIN, HIGH);
  }
  
  number = (number + 1) % 301; // Increment number and wrap around after 300
}
