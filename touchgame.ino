//Created by mohamed.luaay.9393@gmail.com


int output1=2;
int output2=3;
int output3=4;

int x;
unsigned long times;
int input1=A2;
int input2=A3;
int input3=A4;

int score=0;

  int a=0;
  int b=0;
  int c=0;

void setup() {
  pinMode(output1,OUTPUT);
  pinMode(output2,OUTPUT);
  pinMode(output3,OUTPUT);
  
  pinMode(input1,INPUT);
  pinMode(input2,INPUT);
  pinMode(input3,INPUT);
  
 Serial.begin(9600);
 Serial.println("starting");
}

void loop() {
  times=millis();
//
//   a=analogRead(input1); 
//   Serial.println(a);
//   b=analogRead(input2); 
//   Serial.println(b);
//   c=analogRead(input3); 
//   Serial.println(c);
//   delay(500);
  x=random(1,4);

switch (x){

  case 1:
digitalWrite(output1,HIGH);
do {
   a=analogRead(input1); 
//   Serial.println(a);
   
  }while(a>=220);
  score++;
  break ;
  
  case 2:
  
digitalWrite(output2,HIGH);
do {
   b=analogRead(input2); 
//   Serial.println(b);
   
  }while(b>=220);
  score++;
  break;
  
  case 3:
digitalWrite(output3,HIGH);
do {
   c=analogRead(input3); 
//   Serial.println(c);
   
  }while(c>=220);
  score++;
  break;
  
  
  }
  
digitalWrite(output1,LOW);
  
digitalWrite(output2,LOW);
  
digitalWrite(output3,LOW);
//  
if (times>=10000){
  
   Serial.println(score);
  do{
    }while(times>=10000);
  }

//  
//  Serial.println(times);
//  Serial.println("");
//  a=analogRead(input1); 
// Serial.println(a);
//  b=analogRead(input2); 
// Serial.println(b);
//  c=analogRead(input3); 
// Serial.println(c);
// Serial.println("");
//
// if (a<=300) 
// digitalWrite(output1,HIGH);
//else digitalWrite(output1,LOW);
//
// delay(1000);
//
//

}
