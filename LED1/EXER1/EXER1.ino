//EXER_1

int led1 = 13;

void setup()
{
  pinMode(led1,OUTPUT);
}

void loop ()
{
  digitalWrite(led1,HIGH);
  delay(750);
  digitalWrite(led1,LOW);
  delay(750);
}
