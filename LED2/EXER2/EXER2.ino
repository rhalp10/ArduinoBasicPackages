//EXER_2

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int led7 = 7;
int led8 = 6;

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
}

void loop ()
{
  digitalWrite(led1,HIGH);
  delay(200);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(200);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(200);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  delay(200);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  delay(200);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  delay(200);
  digitalWrite(led6,LOW);
  digitalWrite(led7,HIGH);
  delay(200);
  digitalWrite(led7,LOW);
  digitalWrite(led8,HIGH);
  delay(200);
  digitalWrite(led8,LOW);  
}
