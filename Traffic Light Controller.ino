void setup() {
  pinMode(13, OUTPUT); // Red LED
  pinMode(12, OUTPUT); // Yellow LED
  pinMode(8, OUTPUT);  // Green LED (Pin 11 se badal kar 8 kiya)
}

void loop() {
  // --- RED LED (Pin 13) ---
  digitalWrite(13, HIGH);
  delay(4000);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  
  // --- GREEN LED (Pin 8) ---
  digitalWrite(8, HIGH);
  delay(4000);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);

  // --- YELLOW LED (Pin 12) ---
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  delay(100);
}
