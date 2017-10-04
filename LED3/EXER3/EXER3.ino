int number=256, i , j, value, bit, led, bitsetter;
void setup(){
  for(led=6; led<14; led++)
  {
     pinMode (led, OUTPUT);
     digitalWrite(led, LOW);
  }
}

void loop() {
  for (i=0; i<number; i++){
  bitsetter = i;
  for (j=6; j<14; j++)
 {
   value = bitsetter / 2;
   bit = bitsetter % 2;
   if (bit == 1) {
     digitalWrite (j,HIGH);}
   if (bit==0) {
     digitalWrite (j,LOW); }
   bitsetter = value;
   delay(100);
 }
} 
}
