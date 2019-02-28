int red1 =13;                           //maakt een variable red1
int green1 =12;                         //maakt een variable green1                       

int red2 =11;                           //maakt een variable red2
int green2 =10;                         //maakt een variable green2

int red3 =9;                            //maakt een variable red3
int green3 =8;                          //maakt een variable green3

int red4 =7;                            //maakt een variable red4
int green4 =6;                          //maakt een variable green4

void setup() {
  Serial.begin(9600);
pinMode (red1, OUTPUT);                 //verbind variable met pin en input/output
pinMode (green1, OUTPUT);

pinMode (red2, OUTPUT);
pinMode (green2, OUTPUT);

pinMode (red3, OUTPUT);
pinMode (green3, OUTPUT);

pinMode (red4, OUTPUT);
pinMode (green4, OUTPUT);
   
digitalWrite(red1, HIGH);                //dit is de standaard code
digitalWrite(green1, LOW);
digitalWrite(red2, HIGH);
digitalWrite(green2, LOW);
digitalWrite(red3, HIGH);
digitalWrite(green3, LOW);
digitalWrite(red4, HIGH);
digitalWrite(green4, LOW);
}


void loop() {
   digitalWrite(red1, LOW);                      //de aanpassing op de code zodat de lichten aan en uit gaan
   digitalWrite(green1, HIGH);
   delay(5000);                               
   digitalWrite(red1, HIGH);
   digitalWrite(green1, LOW);
   delay(2000);
  
   digitalWrite(red2, LOW);
   digitalWrite(green2, HIGH);
   delay(5000);
   digitalWrite(red2, HIGH);
   digitalWrite(green2, LOW);
   delay(2000);

   digitalWrite(red3, LOW);
   digitalWrite(green3, HIGH);
   delay(5000);
   digitalWrite(red3, HIGH);
   digitalWrite(green3, LOW);
   delay(2000);

   digitalWrite(red4, LOW);
   digitalWrite(green4, HIGH);
   delay(5000);
   digitalWrite(red4, HIGH);
   digitalWrite(green4, LOW);
   delay(2000);   
}


