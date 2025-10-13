// week06_4_arduino_slow_jogging
void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT); //8 Buzzer
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(8, 780, 60); //自己決定音頻(Hz)  pin 8, 780 Hz, 60 ms
  delay(300);  //等 0.333 秒 換下個音
  tone(8, 320, 60); // pin 8, 780 Hz, 60 ms
  delay(300);  //等 0.333 秒 換下個音
} //每秒叫3聲，60秒叫180聲，180 BPM(Beat Per Minute)



