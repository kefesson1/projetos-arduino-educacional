//Declaração de variáveis
#define POSTE 13
#define SENSOR_LUZ A5

void setup()
{
  pinMode(POSTE, OUTPUT); //Configura o pino para modo de saida
  
  Serial.begin(9600); // estabelece uma comunicacao entre arduino e o computador, possibilitando printar valores, etc.
}

void loop()
{
  int luminosidade = analogRead(SENSOR_LUZ); // Variavel que armazena o valor do sensor
  
  // Condicional para o poste acender
  // Se o valor do sensor for inferior a 900, a luz do poste acende, se nao, ela apaga
  if(luminosidade < 900){
    digitalWrite(POSTE, HIGH);
  } else {
    digitalWrite(POSTE, LOW);
  }
  
}