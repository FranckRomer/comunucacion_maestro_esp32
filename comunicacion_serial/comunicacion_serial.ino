

void setup()
{
  Serial.begin(9600); 
  Serial1.begin(9600);  // open serial over TX and RX pins
}

void loop()
{
    Serial.println("Test print serial0");
    Serial1.println("Test print serial1");
  delay(1000);
  // read from port 0, send to port 1 ... working
  if (Serial.available())
  {
      Serial1.print(Serial.read());
  }
  // read from port 1, send to port 0 ... not working
  if (Serial1.available())
  {
    Serial.println("is er ");
      Serial.print(Serial1.read());
  }
 }
