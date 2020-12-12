#define LS 12
#define RS 13
#define LM1 9
#define LM2 10
#define RM1 5
#define RM2 3 
int valueLS; 
int valueRS;
void setup() {
   pinMode(LS,INPUT); 
  pinMode(RS,INPUT);
  pinMode(LM1,OUTPUT);
  pinMode(LM2,OUTPUT);
  pinMode(RM1,OUTPUT);
  pinMode(RM2,OUTPUT);
void loop() {
  if(digitalRead(LS)&& digitalRead(RS))    //move forward
  {
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
  }
  if(!(digitalRead(LS))&&digitalRead(RS))  //turn right
  {
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
  }
  if(digitalRead(LS)&&!(digitalRead(RS))) //turn left
  {
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);
  }
  if(!(digitalRead(LS)&&!(digitalRead(RS)))) //stop
  {
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);
    
  }

}
