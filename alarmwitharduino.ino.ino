const int buzzer=8;
const int trigpin=9;
const int echopin=10;
float timing=0.0;
float distance=0.0;

void setup()
{
  pinMode(echopin, INPUT);
  pinMode(trigpin, OUTPUT);
  pinMode(buzzer, OUTPUT);


  // Write a HIGH or a LOW value to a digital pin with the digitalWrite().
  //If the pin has been configured as an OUTPUT with pinMode() , its voltage will be set to 5V 
  //If the pin has been configured as an INPUT with pinMode() , its voltage will be set to 0
   
  digitalWrite(trigpin, LOW);   
  digitalWrite(buzzer, LOW);

  Serial.begin(9600);    // to fetch output of some information from your Arduino to your computer screen
}

void loop()
{
  digitalWrite(trigpin,LOW);
  delay(2);

  digitalWrite(trigpin, HIGH);
  delay(10);
  digitalWrite(trigpin, LOW);

  timing = pulseIn(echopin, HIGH);
  //Returns the length of the pulse in microseconds or gives up and returns 0 if no complete pulse was received within the timeout.
  distance = (timing * 0.034) / 2;

  Serial.print("distance: ");
  Serial.print(distance);
  Serial.print("cm | ");
  Serial.print(distance / 2.54);
  Serial.println("in");


  if (distance <= 50)
  {
    tone(buzzer,500);
  }
  else{
    noTone(buzzer);
  }

  delay(100);
}