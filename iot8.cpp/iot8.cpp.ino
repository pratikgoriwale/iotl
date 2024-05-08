int num;
int sq;

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}

void loop() {
  Serial.println("Enter the number:");
  
  while (!Serial.available()) {} // Wait for user input
  
  num = Serial.parseInt(); // Read the integer from serial input
  
  sq = num * num; // Calculate the square
  
  Serial.print("The square of ");
  Serial.print(num);
  Serial.print(" is: ");
  Serial.println(sq);
  
  // Clear input buffer
  while (Serial.available()) {
    Serial.read();
  }
}

