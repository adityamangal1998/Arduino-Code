#define LC 10 //LC equal to left center
#define LN 9 //LC equal to left near
#define LF 8 //LC equal to left far
#define RC 11 //LC equal to right center
#define RN 12 //LC equal to right near
#define RF 13 //LC equal to right far

#define mot1 0 // left motor M1a
#define mot2 1 // left motor M2a
#define mot3 6 // right motor M2b
#define mot4 7 // right motor M2b


int LCR;
int LNR;
int LFR;   
int RCR;
int RNR;
int RFR;
void readsensor()
{
  LCR  = digitalRead(LC);
  LNR    = digitalRead(LN);
  LFR     = digitalRead(LF);
  RCR = digitalRead(RC);
  RNR   = digitalRead(RN);
  RFR    = digitalRead(RF);  

  // serial printing below for debugging purposes

 Serial.print("leftCenterReading: ");
 Serial.println(LCR);
 Serial.print("leftNearReading: ");
 Serial.println(LNR);
 Serial.print("leftFarReading: ");
 Serial.println(LFR);
  
 Serial.print("rightCenterReading: ");
 Serial.println(RCR);
 Serial.print("rightNearReading: ");
 Serial.println(RNR);
 Serial.print("rightFarReading: ");
 Serial.println(RFR);
delay(2000);
  
}


void setup() {
pinMode(LC, INPUT);
pinMode(LN, INPUT);
pinMode(LF, INPUT);
pinMode(RC, INPUT);
pinMode(RN, INPUT);
pinMode(RF, INPUT);

pinMode(mot1, OUTPUT);
pinMode(mot2, OUTPUT);
pinMode(mot3, OUTPUT);
pinMode(mot4, OUTPUT);



Serial.begin(9600); //sets serial port for communication
}

void loop() {
  analogWrite(mot1,255);
analogWrite(mot2,0);
analogWrite(mot3,255);
analogWrite(mot4,0);
while(1)
{
 readsensor();
 if(LCR==1&&RCR==1)
 analogWrite(mot3,0);
   analogWrite(mot4,30);
   analogWrite(mot1,0);
   analogWrite(mot2,30);
  {
    //IF LEFT FAR SENSOR DETECT LINE
    if(LFR==1&&RFR==0)
      {
        Serial.print("turn left");
         analogWrite(mot1,0);
   analogWrite(mot2,30);
         analogWrite(mot3,255);
      analogWrite(mot4,0);
        delay(40);
      }
      //IF RIGHT SENSOR DETECT LINE
      if(LFR==0&&RFR==1)
      {
        Serial.print("turn right");
        analogWrite(mot1,255);
    analogWrite(mot2,0);
        analogWrite(mot3,0);
   analogWrite(mot4,30);
        delay(40);
      }
      //IF ONLY LC AND RC DETECT LINE
      if(LFR==0&&RFR==0)
      {
        Serial.print("straight");
       
       analogWrite(mot1,255);
    analogWrite(mot2,0);
         analogWrite(mot3,255);
      analogWrite(mot4,0);
       delay(40);
      }
      //IF ALL DETECT LINE THEN STOP
      if(LNR==1&&LFR==1&&RNR==1&&RFR==1)
        {
          Serial.print("stop");
          analogWrite(mot1,0);
analogWrite(mot2,0);
analogWrite(mot3,0);
analogWrite(mot4,0);
          delay(40);
        }
  
  //IF ONLY LEFT SENSOR DETECT LINE
 if(LCR==1&&RCR==0)
  {
    if(LNR==1)
      {
        Serial.print(" turn left");
        analogWrite(mot1,0);
   analogWrite(mot2,30);
        analogWrite(mot3,255);
    analogWrite(mot4,0);
        delay(40);
      }
     if(LNR==0&&LFR==0)
      {
        Serial.print("straight");
         analogWrite(mot1,255);
   analogWrite(mot2,0);
       analogWrite(mot3,255);
    analogWrite(mot4,0); 
       delay(40);
      }
  }
   //IF ONLY RIGHT SENSOR DETECT LINE
 if(LCR==0&&RCR==1)
  {
    if(RNR==1)
      {Serial.print("turn right");
        analogWrite(mot1,255);
   analogWrite(mot2,0);
         analogWrite(mot3,0);
   analogWrite(mot4,30);
       delay(40);
      }
     if(RNR==0&&RFR==0)
      {Serial.print("straight");
        analogWrite(mot1,255);
   analogWrite(mot2,0);
       analogWrite(mot3,255);
    analogWrite(mot4,0); 
        delay(40);
      }
  }
}
}
}
