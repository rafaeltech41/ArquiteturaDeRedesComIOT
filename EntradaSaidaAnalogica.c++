/*
Programa que liga o LED RGB
Autor: Rafael Moreira Lopes
Data: 13/9/2024
Versão:1.0
*/

//Define Constantes = #define

#define LED_VM 9
#define LED_VD 10
#define LED_AZ 11

//Define Variaveis

void setup()
{
  // Declara pinos dos LEDs VM, VD e AZ como saídas

    pinMode(LED_VM , OUTPUT); //declara pinos dos leds como saídas
    pinMode(LED_VD , OUTPUT);
    pinMode(LED_AZ , OUTPUT);
    digitalWrite (LED_VM ,LOW); //forçou para que ele comece desligado
    digitalWrite (LED_VD ,LOW);  
    digitalWrite (LED_AZ ,LOW);
}

void loop()
{
  analogWrite (LED_VM , 255); //controla intensidade do LED vermelho 0 a 255
  analogWrite (LEDV_D , 0); //controla intensidade do LED verde 0 a 255
  analogWrite (LED_AZ , 0); //controla intensidade do LED azul 0 a 255

}
