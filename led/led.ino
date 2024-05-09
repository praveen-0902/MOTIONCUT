int nr = 13;
int ny= 12;
int ng= 11;
int sr= 10;
int sg= 9;
int sy= 8;
int wr= 7;
int wg= 6;
int wy= 5;
int ey= 4;
int er= 3;
int eg= 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(nr,OUTPUT);
  pinMode(ny,OUTPUT);
  pinMode(ng,OUTPUT);
  pinMode(sr,OUTPUT);
  pinMode(sy,OUTPUT);
  pinMode(sg,OUTPUT);
  pinMode(wy,OUTPUT);
  pinMode(wr,OUTPUT);
  pinMode(wg,OUTPUT);
  pinMode(er,OUTPUT);
  pinMode(ey,OUTPUT);
  pinMode(eg,OUTPUT);

  digitalWrite(ng,LOW);
  digitalWrite(ny,LOW);
  digitalWrite(nr,LOW);
  digitalWrite(sg,LOW);
  digitalWrite(sr,LOW);
  digitalWrite(sy,LOW);
  digitalWrite(wr,LOW);
  digitalWrite(wg,LOW);
  digitalWrite(wy,LOW);
  digitalWrite(eg,LOW);
  digitalWrite(er,LOW);
  digitalWrite(ey,LOW);
  
  
  
  
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ng,LOW);
  digitalWrite(ny,HIGH);
  digitalWrite(nr,LOW);
  digitalWrite(sg,LOW);
  digitalWrite(sr,LOW);
  digitalWrite(sy,HIGH);
  digitalWrite(wr,LOW);
  digitalWrite(wg,LOW);
  digitalWrite(wy,HIGH);
  digitalWrite(eg,LOW);
  digitalWrite(er,LOW);
  digitalWrite(ey,HIGH);
  delay(1000);
  
  digitalWrite(ng,HIGH);
  digitalWrite(ny,LOW);
  digitalWrite(nr,LOW);
  digitalWrite(sg,LOW);
  digitalWrite(sr,HIGH);
  digitalWrite(sy,LOW);
  digitalWrite(wr,HIGH);
  digitalWrite(wg,LOW);
  digitalWrite(wy,LOW);
  digitalWrite(eg,LOW);
  digitalWrite(er,HIGH);
  digitalWrite(ey,LOW);
  delay(1000);
  digitalWrite(ng,LOW);
  digitalWrite(ny,LOW);
  digitalWrite(nr,HIGH);
  digitalWrite(sg,HIGH);
  digitalWrite(sr,LOW);
  digitalWrite(sy,LOW);
  digitalWrite(wr,HIGH);
  digitalWrite(wg,LOW);
  digitalWrite(wy,LOW);
  digitalWrite(eg,LOW);
  digitalWrite(er,HIGH);
  digitalWrite(ey,LOW);
  delay(1000);
  digitalWrite(ng,LOW);
  digitalWrite(ny,LOW);
  digitalWrite(nr,HIGH);
  digitalWrite(sg,LOW);
  digitalWrite(sr,HIGH);
  digitalWrite(sy,LOW);
  digitalWrite(wr,LOW);
  digitalWrite(wg,HIGH);
  digitalWrite(wy,LOW);
  digitalWrite(eg,LOW);
  digitalWrite(er,HIGH);
  digitalWrite(ey,LOW);
  delay(1000);
  digitalWrite(ng,LOW);
  digitalWrite(ny,LOW);
  digitalWrite(nr,HIGH);
  digitalWrite(sg,LOW);
  digitalWrite(sr,HIGH);
  digitalWrite(sy,LOW);
  digitalWrite(wr,HIGH);
  digitalWrite(wg,LOW);
  digitalWrite(wy,LOW);
  digitalWrite(eg,HIGH);
  digitalWrite(er,LOW);
  digitalWrite(ey,LOW);
  delay(1000);
  
  
  
  
  
  

}
