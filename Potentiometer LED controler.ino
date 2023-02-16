float V2;
int readVal;
int voltPin=A2;
int greenLed=10;
int yellowLed=11;
int redLed=12;
int delayTime=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (greenLed,OUTPUT);
pinMode (yellowLed,OUTPUT);
pinMode (redLed,OUTPUT);
pinMode (voltPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(voltPin);
V2=(5./1023.)*readVal;
Serial.print("Potentiometer voltage is ");
Serial.println(V2);

if (V2<3.0) {
  digitalWrite (greenLed, HIGH);
}
if (V2>3.0) {
  digitalWrite (greenLed, LOW);
}
if (V2>3.0 && V2<4.0) {
  digitalWrite (yellowLed, HIGH);
}
if (V2<3.0 || V2>4.0) {
  digitalWrite (yellowLed, LOW);
}
if (V2>4.0) {
  digitalWrite (redLed, HIGH);
}
if (V2<4.0) {
  digitalWrite (redLed, LOW);
}
delay (delayTime);
}
