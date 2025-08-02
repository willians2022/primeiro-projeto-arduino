# primeiro-projeto-arduino
 projeto simples ligar e desligar o led_builtin da placa arduino uno . que pode ser usado com pino 13 também 
 segue codigo abaixo :
 
// C++ code

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);//led da própria placa ou saida pino 13 do arduino 
  
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // acender o led da placa 
  delay(1000); // tempo aceso do led da placa 
  digitalWrite(LED_BUILTIN, LOW); // apagar o led da placa 
  delay(1000); // tempo do led apagado   
}
