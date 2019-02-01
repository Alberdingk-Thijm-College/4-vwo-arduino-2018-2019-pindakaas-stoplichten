int red1 =13;                           //maakt een variable red1
int green1 =12;                         //maakt een variable green1                       

int red2 =11;                           //maakt een variable red2
int green2 =10;                         //maakt een variable green2

int red3 =9;                            //maakt een variable red3
int green3 =8;                          //maakt een variable green3

int red4 =7;                            //maakt een variable red4
int green4 =6;                          //maakt een variable green4

int lichtvoetganger =5;                 //maakt een variable lichtvoetganger
int knopvoetganger =4;                  //maakt een variable knopvoetganger

int knopvoetganger_gedrukt = 0;         //maakt een variable knopvoetganger_gedrukt

int lichtBus =8;                        //maakt een variable lichtBus
int KnopBus =3;                         //maakt een variable KnopBus

int knopBus_gedrukt = 0;                //maakt een variable knopBus_gedrukt

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

pinMode (lichtvoetganger, OUTPUT);
pinMode (knopvoetganger, INPUT);
   
digitalWrite(red1, HIGH);                //dit is de standaard code
digitalWrite(green1, LOW);
digitalWrite(red2, HIGH);
digitalWrite(green2, LOW);
digitalWrite(red3, HIGH);
digitalWrite(green3, LOW);
digitalWrite(red4, HIGH);
digitalWrite(green4, LOW);
}

void vertraag(int mil){                           //dit maakt een andere soort delay aan waardoor er elke microseconde word gekeken 
  for (int i = 0; i < mil; i++){
    if (digitalRead (knopvoetganger) == HIGH)     //of de knop word gedrukt en slaat dat op als dat gebeurd voor de Voetgangers
    
      knopvoetganger_gedrukt = 2;
      
    }
    if (digitalRead (KnopBus) == HIGH)            //doet hetzelfde voor de Bus
    {
      knopBus_gedrukt = 1;
      
    }
   delay(1);
  } 
}

void loop() {
   digitalWrite(red1, LOW);                      //de aanpassing op de code zodat de lichten aan en uit gaan
   digitalWrite(green1, HIGH);
   vertraag(5000);                               //dit is de aangepasde delay
   digitalWrite(red1, HIGH);
   digitalWrite(green1, LOW);
   vertraag(2000);

   if (knopBus_gedrukt == 1)
   {
   
   digitalWrite(lichtBus, HIGH);
   Serial.println("zet aan");
   vertraag(5000);
   knopBus_gedrukt=0;
   digitalWrite(lichtBus, LOW);
   }
  
   digitalWrite(red2, LOW);
   digitalWrite(green2, HIGH);
   vertraag(5000);
   digitalWrite(red2, HIGH);
   digitalWrite(green2, LOW);
   vertraag(2000);

   if (knopBus_gedrukt == 1)
   {
   
   digitalWrite(lichtBus, HIGH);
   Serial.println("zet aan");
   vertraag(5000);
   knopBus_gedrukt=0;
   digitalWrite(lichtBus, LOW);
   }
   
   digitalWrite(red3, LOW);
   digitalWrite(green3, HIGH);
   vertraag(5000);
   digitalWrite(red3, HIGH);
   digitalWrite(green3, LOW);
   vertraag(2000);

   if (knopBus_gedrukt == 1)
   {
   
   digitalWrite(lichtBus, HIGH);
   Serial.println("zet aan");
   vertraag(5000);
   knopBus_gedrukt=0;
   digitalWrite(lichtBus, LOW);
   }
   
   digitalWrite(red4, LOW);
   digitalWrite(green4, HIGH);
   vertraag(5000);
   digitalWrite(red4, HIGH);
   digitalWrite(green4, LOW);
   vertraag(2000);  

    if (knopBus_gedrukt == 1)
   {
   
   digitalWrite(lichtBus, HIGH);
   Serial.println("zet aan");
   vertraag(5000);
   knopBus_gedrukt=0;
   digitalWrite(lichtBus, LOW);
   }

   if (knopvoetganger_gedrukt == 2)         //als de voetgangersknop word gedrukt gaat het voetgangers licht aan nadat de autos zijn gegaan
   {
   
   digitalWrite(lichtvoetganger, HIGH);
   Serial.println("zet aan");
   vertraag(5000);
   knopvoetganger_gedrukt=0;
   digitalWrite(lichtvoetganger, LOW);
   } 
 
  if (knopBus_gedrukt == 1)
   {
   
   digitalWrite(lichtBus, HIGH);
   Serial.println("zet aan");
   vertraag(5000);
   knopBus_gedrukt=0;
   digitalWrite(lichtBus, LOW);
   } 
}


