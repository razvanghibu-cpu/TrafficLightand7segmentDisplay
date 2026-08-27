int a=1;
int b=2;
int c=3;
int d=4;
int e=5;
int f=6;
int g=7;
int rosu=8;
int galben=9;
int verde=10;
int i;



void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(rosu,OUTPUT);
  pinMode(galben,OUTPUT);
  pinMode(verde,OUTPUT);


}
void numar(int n)
{
  switch(n){
    case(0):
    {
      digitalWrite(a,LOW);      digitalWrite(e,LOW);
      digitalWrite(b,LOW);      digitalWrite(f,LOW);
      digitalWrite(c,LOW);      digitalWrite(g,LOW);
      digitalWrite(d,LOW);
      break;


    }
    case(1):
    {
      digitalWrite(a,LOW);      digitalWrite(e,LOW);
      digitalWrite(b,HIGH);      digitalWrite(f,LOW);
      digitalWrite(c,HIGH);      digitalWrite(g,LOW);
      digitalWrite(d,LOW);
      break;


    }
     case(2):
    {
      digitalWrite(a,HIGH);     
      digitalWrite(e,HIGH);
      digitalWrite(b,HIGH);      
      digitalWrite(f,LOW);
      digitalWrite(c,LOW);      
      digitalWrite(g,HIGH);
      digitalWrite(d,HIGH);
      break;


    } case(3):
    {
      digitalWrite(a,HIGH);      digitalWrite(e,LOW);
      digitalWrite(b,HIGH);      digitalWrite(f,LOW);
      digitalWrite(c,HIGH);      digitalWrite(g,HIGH);
      digitalWrite(d,HIGH);
      break;


    } case(4):
    {
      digitalWrite(a,LOW);      digitalWrite(e,LOW);
      digitalWrite(b,HIGH);      digitalWrite(f,HIGH);
      digitalWrite(c,HIGH);      digitalWrite(g,HIGH);
      digitalWrite(d,LOW);
      break;


    } case(5):
    {
      digitalWrite(a,HIGH);      digitalWrite(e,LOW);
      digitalWrite(b,LOW);      digitalWrite(f,HIGH);
      digitalWrite(c,HIGH);      digitalWrite(g,HIGH);
      digitalWrite(d,HIGH);
      break;


    } case(6):
    {
      digitalWrite(a,HIGH);      digitalWrite(e,HIGH);
      digitalWrite(b,LOW);      digitalWrite(f,HIGH);
      digitalWrite(c,HIGH);      digitalWrite(g,HIGH);
      digitalWrite(d,HIGH);
      break;

    } case(7):
    {
      digitalWrite(a,HIGH);      digitalWrite(e,LOW);
      digitalWrite(b,HIGH);      digitalWrite(f,LOW);
      digitalWrite(c,HIGH);      digitalWrite(g,LOW);
      digitalWrite(d,LOW);
      break;


    }
    



  }

}

void loop() {
  digitalWrite(verde,LOW);

digitalWrite(rosu,HIGH);
for(i=7;i>0;i--)
{
  numar(i);
  delay(500);
  numar(0);
  delay(500);
}
delay(50);
digitalWrite(verde,HIGH);
digitalWrite(rosu,LOW);
for(i=7;i>0;i--)
{
  if(i>=4){
  numar(i);
  delay(500);
  numar(0);
  delay(500);
  }
  else
  {
  numar(i);
  digitalWrite(galben,HIGH);
  delay(500);
  numar(0);
  digitalWrite(galben,LOW);
  delay(500);
  }
  delay(50);

}


}
