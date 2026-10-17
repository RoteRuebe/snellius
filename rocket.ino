uint pins_display[7] = {
  12, 15, 14, 2, 16, 0, 3
};

static uint digits[9][7] = {
  {1, 1, 1, 1, 1, 1, 0}      // 0
  {0, 1, 1, 0, 0, 0, 0},     // 1
  {1, 1, 0, 1, 1, 0, 1},     // 2
  {1, 1, 1, 1, 0, 0, 1},     // 3
  {0, 1, 1, 0, 0, 1, 1},     // 4
  {1, 0, 1, 1, 0, 1, 1},     // 5
  {1, 1, 1, 1, 1, 1, 0},     // 6
  {1, 1, 1, 0, 0, 0, 0},     // 7
  {1, 1, 1, 1, 1, 1, 1},     // 8
  {1, 1, 1, 1, 0, 1, 1}      // 9
}
void display(uint_8t n) {
  digitalWrite(pins_display[0], digits[n][0]);
  digitalWrite(pins_display[1], digits[n][1]);
  digitalWrite(pins_display[2], digits[n][2]);
  digitalWrite(pins_display[3], digits[n][3]);
  digitalWrite(pins_display[4], digits[n][4]);
  digitalWrite(pins_display[5], digits[n][5]);
  digitalWrite(pins_display[6], digits[n][6]);
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  for (int i = 0; i < 7; i++) {
    pinMode(pins_display[i], OUTPUT);
  }
}

void loop() {
  for(int i = 0; i < 10; i++) {
    display(i);
    delay(1000);
  }
}
