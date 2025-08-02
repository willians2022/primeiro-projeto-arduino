// C++ code

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);//led da própria placa
  pinMode (13,OUTPUT); // saida do pino paar led 
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // acender o led da placa 
  delay(1000); // tempo aceso do led da placa 
  digitalWrite(LED_BUILTIN, LOW); // apagar o led da placa 
  delay(1000); // tempo do led apagado   
}