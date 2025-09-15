//week02_3_mousePressed_serial
import processing.serial.*; //第1行，使用 USB 的 serial
Serial myPort; //第2行，宣告USB 的 Serial 變數 myPort
void mousePressed(){
  myPort.write(' '); // 第4行， mouse按下去時，就送' '出去
}
void setup(){
  size(400,400);
  myPort = new Serial(this, "COM4", 9600);
} //剛剛在 Arduino 裡設定 COM 多少，就多少
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
