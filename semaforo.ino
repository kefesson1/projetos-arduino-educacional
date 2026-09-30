int ledVermelho = 13;
int ledAmarelo = 12;
int ledVerde = 11;

void setup() {
  // Configura os pinos como saída de energia
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // Acende o Verde por 5 segundos
  digitalWrite(ledVerde, HIGH);
  delay(5000); 
  digitalWrite(ledVerde, LOW);

  // Acende o Amarelo por 2 segundos
  digitalWrite(ledAmarelo, HIGH);
  delay(2000); 
  digitalWrite(ledAmarelo, LOW);

  // Acende o Vermelho por 5 segundos
  digitalWrite(ledVermelho, HIGH);
  delay(5000); 
  digitalWrite(ledVermelho, LOW);
}
