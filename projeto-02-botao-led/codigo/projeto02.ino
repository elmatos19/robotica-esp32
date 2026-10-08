const int led = 23;
const int botao = 22;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLDOWN);
}

void loop(){
  int estado = digitalRead(botao);

  if (estado == HIGH) {
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}
