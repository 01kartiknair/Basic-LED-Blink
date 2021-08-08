// C++ code
//
int led=8;

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(led, LOW);
  delay(500); // Wait for 500 millisecond(s)
}