const int Buzzer=3;
int freqBuzzer=0;
int trigPin=8;
int echoPin=9;
int long duration;
int cm=0;
int ledVerd=10;
int ledGroc=11;
int ledVermell=6;

void setup() {
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(Buzzer,OUTPUT);
pinMode(ledVerd,OUTPUT);
pinMode(ledGroc,OUTPUT);
pinMode(ledVermell,OUTPUT);
}

void loop() {
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
duration=duration/2;
cm=duration/29;
Serial.print("Distancia:");
Serial.print(cm);
delay(100);
if (cm>10){
digitalWrite (ledVerd,HIGH);
digitalWrite (ledGroc,LOW);
digitalWrite (ledVermell,LOW);
digitalWrite (Buzzer,LOW);
}
else if (cm>5){
digitalWrite (ledVerd,HIGH);
digitalWrite (ledGroc,HIGH);
digitalWrite (ledVermell,LOW);
digitalWrite (Buzzer,HIGH);
delay(100);
digitalWrite (Buzzer,LOW);
delay(50);
digitalWrite (Buzzer,HIGH);
delay(40);
digitalWrite (Buzzer,LOW);



}else if (cm<5){
digitalWrite (ledVerd,HIGH);
digitalWrite (ledGroc,HIGH);
digitalWrite (ledVermell,HIGH);
digitalWrite (Buzzer,HIGH);


}}
