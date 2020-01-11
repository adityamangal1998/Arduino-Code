#define LS1 7 // left 1 sensor
#define LS2 6 // left 2 sensor
#define RS1 5// right 2 sensor
#define RS2 4 // right 1 sensor

#define LM1 8 // left motor M1a
#define LM2 9 // left motor M2a
#define RM1 10 // right motor M2b
#define RM2 11 // right motor M2b

int buzzerPin = 8;

int sensorPin = A0; // select the input pin for LDR
int sensorValue = 0; // variable to store the value coming

int x=0;
int y=0;
int z=0;
int t=0;

void setup()
{
pinMode(LS1, INPUT);
pinMode(LS2, INPUT);
pinMode(RS2, INPUT);
pinMode(RS1, INPUT);

pinMode(LM1, OUTPUT);
pinMode(LM2, OUTPUT);
pinMode(RM1, OUTPUT);
pinMode(RM2, OUTPUT);

Serial.begin(9600); //sets serial port for communication
}
void loop()
{
 /* sensorValue = analogRead(sensorPin); // read the value from the sensor
if(sensorValue>=300)
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);

    //on the buzzor
    tone(buzzerPin, 1000, 5000);
    
    delay(1000);
  }*/
  //else{
  x=digitalRead(LS1);
  y=digitalRead(LS2);
  z=digitalRead(RS2);
  t=digitalRead(RS1);

 /*Serial.print("left sensor 1: ");
  Serial.println(x);
  delay(1000);
   Serial.print("left sensor 2: ");
  Serial.println(y);
  delay(1000);
   Serial.print("right sensor 2: ");
  Serial.println(z);
  delay(1000);
  Serial.print("right sensor 1: ");
  Serial.println(t);
  delay(1000);*/
  
       if(digitalRead(LS2) && !(digitalRead(LS1))&& !(digitalRead(RS2))&& digitalRead(RS1) ) // Move Forward when both detect
              {
                digitalWrite(LM1, 0);
                digitalWrite(LM2, 1); 
                digitalWrite(RM1, 0);
                digitalWrite(RM2, 1);
               }

        if(!(digitalRead(RS2)) &&(digitalRead(RS1)) &&(digitalRead(LS2)) && (digitalRead(LS1))) // turn left when all three detect black
               {
                 digitalWrite(LM1, HIGH);
                 digitalWrite(LM2, LOW);
                 digitalWrite(RM1, LOW);
                 digitalWrite(RM2, HIGH);
                }
          if(!(digitalRead(RS2)) &&!(digitalRead(RS1)) &&!(digitalRead(LS2)) && (digitalRead(LS1))) // turn left when only one detect black
               {
                 digitalWrite(LM1, HIGH);
                 digitalWrite(LM2, LOW);
                 digitalWrite(RM1, LOW);
                 digitalWrite(RM2, HIGH);
                }       

         if(digitalRead(LS2) && !(digitalRead(LS1))&& !(digitalRead(RS1))&& !(digitalRead(RS2))) // Turn right when all three detect black
                {
                  digitalWrite(LM1, LOW);
                  digitalWrite(LM2, HIGH);
                  digitalWrite(RM1, HIGH);
                  digitalWrite(RM2, LOW);
                }
          if(digitalRead(LS2) && (digitalRead(LS1))&& (digitalRead(RS1))&& !(digitalRead(RS2))) // Turn right when only one detect black
                {
                  digitalWrite(LM1, LOW);
                  digitalWrite(LM2, HIGH);
                  digitalWrite(RM1, HIGH);
                  digitalWrite(RM2, LOW);
                }       

          if((digitalRead(LS2)) &&(digitalRead(LS1)) &&(digitalRead(RS2)) && (digitalRead(RS1))) // Finish line
                {
                   digitalWrite(LM1, 0);
                digitalWrite(LM2, 0); 
                digitalWrite(RM1, 0);
                digitalWrite(RM2, 0);
                }
       // }   
}
