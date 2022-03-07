int boto1= 9;
int LED1green= 11;
int LED1yellow= 12;
int LED1red= 13;
int boto2= 3;
int LED2green= 5;
int LED2yellow= 6;
int LED2red= 7;
bool estatActual1=0;
bool estatActual2=0;
int pulsacions=1;

void setup() {
pinMode(LED1green, OUTPUT);
pinMode(LED1red, OUTPUT);
pinMode(LED1yellow, OUTPUT);
pinMode(boto1, INPUT);
pinMode(LED2green, OUTPUT);
pinMode(LED2red, OUTPUT);
pinMode(LED2yellow, OUTPUT);
pinMode(boto2, INPUT);
}

void loop() {
estatActual1=digitalRead(boto1);
estatActual2=digitalRead(boto2);
    if(estatActual1==HIGH){
      digitalWrite(LED2green, LOW);
      digitalWrite(LED2yellow,HIGH);
      delay(500);
      digitalWrite(LED2yellow, LOW);
      delay(500);
      digitalWrite(LED2yellow,HIGH);
      delay(500);
      digitalWrite(LED2yellow, LOW);
      delay(500);
      digitalWrite(LED2red,HIGH);
      delay(500);
      digitalWrite(LED1green, HIGH);
      digitalWrite(LED1red,LOW);
    }
if(estatActual2==HIGH){
      digitalWrite(LED1green, LOW);
      digitalWrite(LED1yellow,HIGH);
      delay(500);
      digitalWrite(LED1yellow, LOW);
      delay(500);
      digitalWrite(LED1yellow,HIGH);
      delay(500);
      digitalWrite(LED1yellow, LOW);
      delay(500);
      digitalWrite(LED1red,HIGH);
      delay(500);
      digitalWrite(LED2green, HIGH);
      digitalWrite(LED2red,LOW);
    }
}
