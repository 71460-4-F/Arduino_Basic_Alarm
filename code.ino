
int analogPin = A1;
int relePin = 8;   
int ledPin = 2;
int tempoLigado = 10; 
int val = 0; 
 
void setup()
{
  Serial.begin(9600);
  pinMode(relePin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(analogPin, INPUT);
}
 
void loop(){
  val = analogRead(analogPin);
  if(val > 100){
    digitalWrite(relePin,HIGH);
    for(int i = 0; i < tempoLigado; i++){ 
      digitalWrite(ledPin, HIGH);
      delay(1000); // espera 1 seg
      digitalWrite(ledPin, LOW);
      delay(500);
    }
  }
  else
  {
     digitalWrite(relePin,LOW); 
  }
}
