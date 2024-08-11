const int OUTPUT_PIN = 2;

void setup() {  
  digitalWrite(OUTPUT_PIN, HIGH);
  pinMode(OUTPUT_PIN, OUTPUT);     
  Serial.begin(9600);
  Serial.println("How to Reset Arduino Programmatically");
}
void loop() 
{     
  Serial.println("Arduino will be reset after 5 seconds");
  delay(5000);
  digitalWrite(OUTPUT_PIN, LOW);
  Serial.println("Arduino never run to this line");
}
