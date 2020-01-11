#define leftCenterSensor   3
#define leftNearSensor     4
#define leftFarSensor      5
#define rightCenterSensor  12
#define rightNearSensor    6
#define rightFarSensor     7
int leftCenterReading;
int leftNearReading;
int leftFarReading;   
int rightCenterReading;
int rightNearReading;
int rightFarReading;
void setup() {
  // put your setup code here, to run once:
 pinMode(leftCenterSensor, INPUT);
  pinMode(leftNearSensor, INPUT);
  pinMode(leftFarSensor, INPUT);
  pinMode(rightCenterSensor, INPUT);
  pinMode(rightNearSensor, INPUT);
  pinMode(rightFarSensor, INPUT);
   Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  leftCenterReading  = digitalRead(leftCenterSensor);
  leftNearReading    = digitalRead(leftNearSensor);
  leftFarReading     = digitalRead(leftFarSensor);
  rightCenterReading = digitalRead(rightCenterSensor);
  rightNearReading   = digitalRead(rightNearSensor);
  rightFarReading    = digitalRead(rightFarSensor);  

Serial.print("leftCenterReading: ");
 Serial.println(leftCenterReading);
 Serial.print("leftNearReading: ");
 Serial.println(leftNearReading);
 Serial.print("leftFarReading: ");
 Serial.println(leftFarReading);
  
 Serial.print("rightCenterReading: ");
 Serial.println(rightCenterReading);
 Serial.print("rightNearReading: ");
 Serial.println(rightNearReading);
 Serial.print("rightFarReading: ");
 Serial.println(rightFarReading);
 delay(2000);
}
