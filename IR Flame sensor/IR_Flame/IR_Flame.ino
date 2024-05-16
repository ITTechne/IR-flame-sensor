int Flame_Sensor = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(Flame_Sensor, INPUT);
}

void loop()
{
  // if the value is 0 the is no fire and if larger then 0 there is no fire
  int Flame_Value = analogRead(Flame_Sensor);  
  Serial.println(Flame_Value);
  delay(100);
}