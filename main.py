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
