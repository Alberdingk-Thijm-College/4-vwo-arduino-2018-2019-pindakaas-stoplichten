int red1 =13;
int green1 =12;

int red2 =11;
int green2 =10;

int red3 =9;
int green3 =8;

int red4 =7;
int green4 =6;

int lichtvoetganger =5;
int knopvoetganger =1;

int knopvoetganger_gedrukt = 0;

void setup() {
pinMode (red1, OUTPUT);
pinMode (green1, OUTPUT);

pinMode (red2, OUTPUT);
pinMode (green2, OUTPUT);

pinMode (red3, OUTPUT);
pinMode (green3, OUTPUT);

pinMode (red4, OUTPUT);
pinMode (green4, OUTPUT);

pinMode (lichtvoetganger, OUTPUT);
pinMode (knopvoetganger, INPUT);
   
digitalWrite(red1, HIGH);
digitalWrite(green1, LOW);
digitalWrite(red2, HIGH);
digitalWrite(green2, LOW);
digitalWrite(red3, HIGH);
digitalWrite(green3, LOW);
digitalWrite(red4, HIGH);
digitalWrite(green4, LOW);
}
void vertraag(int mil){
  for (int i = 0; i < mil; i++){
    if (digitalRead (knopvoetganger) == HIGH){
      knopvoetganger_gedrukt = 1;
      delay(1);
    }
   
  } 
}

void loop() {
   digitalWrite(red1, LOW);
   digitalWrite(green1, HIGH);
   vertraag(5000);
   
   digitalWrite(red1, HIGH);
   digitalWrite(green1, LOW);
   vertraag(2000);
   digitalWrite(red2, LOW);
   digitalWrite(green2, HIGH);
   vertraag(5000);

   digitalWrite(red2, HIGH);
   digitalWrite(green2, LOW);
   vertraag(2000);
   digitalWrite(red3, LOW);
   digitalWrite(green3, HIGH);
   vertraag(5000);
   
   digitalWrite(red3, HIGH);
   digitalWrite(green3, LOW);
   vertraag(2000);
   digitalWrite(red4, LOW);
   digitalWrite(green4, HIGH);
   vertraag(5000);

   digitalWrite(red4, HIGH);
   digitalWrite(green4, LOW);
   vertraag(2000);   

   if (knopvoetganger_gedrukt == 1){
   
   digitalWrite(lichtvoetganger, HIGH);
   vertraag(5000);
   knopvoetganger_gedrukt=0;
   digitalWrite(lichtvoetganger, LOW);
   } 
  
}

