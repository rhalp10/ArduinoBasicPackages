#define A 3
#define B 4
#define C 5
#define D 6
#define E 7
#define F_SEG 8
#define G 9


// Pins driving common anodes
#define CA1 13

// Pins for A B C D E F G, in sequence
const int segs[7] = { A, B, C, D, E, F_SEG, G };

// Segments that make each number
const byte numbers[10] = { 0b1000000, 0b1111001, 0b0100100, 0b0110000, 0b0011001, 0b0010010,
0b0000010, 0b1111000, 0b0000000, 0b0010000 };

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F_SEG, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(CA1, OUTPUT);
}

void loop() {
  for (int digit1=0; digit1 < 10; digit1++) {
      unsigned long startTime = millis();
      for (unsigned long elapsed=0; elapsed < 1000; elapsed = millis() - startTime) {
        lightDigit1(numbers[digit1]);
        delay(5);
      }
    }
  }

void lightDigit1(byte number) {
  digitalWrite(CA1, HIGH);
  lightSegments(number);
}

void lightSegments(byte number) {
  for (int i = 0; i < 7; i++) {
    int bit = bitRead(number, i);
    digitalWrite(segs[i], bit);
  }
}
