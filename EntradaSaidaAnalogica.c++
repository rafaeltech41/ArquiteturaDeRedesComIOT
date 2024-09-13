/*
Programa que liga o LED RGB
Autor: Rafael Moreira Lopes
Data: 13/9/2024
Versão:1.0
*/

// Define Constantes = #define

#define LED_VM 9  // declara pino do LED
#define LED_VD 10 // declara pino do LED
#define LED_AZ 11 // declara pino do LED
#define LED1 6    // declara pino do LED
#define POT1 A0   // declara pino do POT 1

// Define Variaveis
int POT1_ESTADO = 0; // declara variavel que armazena estado do POT1

void setup()
{
    Serial.begin(115200); // inicia comunicação com o PC
    // Declara pinos dos LEDs VM, VD e AZ como saídas

    pinMode(LED_VM, OUTPUT); // declara pinos dos leds como saídas
    pinMode(LED_VD, OUTPUT);
    pinMode(LED_AZ, OUTPUT);
    digitalWrite(LED_VM, LOW); // forçou para que ele comece desligado
    digitalWrite(LED_VD, LOW);
    digitalWrite(LED_AZ, LOW);
    digitalWrite(LED1, LOW);
}

void loop()
{
    POT1_ESTADO = analogRead(POT1); // Faz leitura de pino analógico
    Serial.println(POT1_ESTADO);    // envia variavel para o PC

    analogWrite(LED_VM, 255);           // controla intensidade do LED vermelho 0 a 255
    analogWrite(LED_VD, 0);             // controla intensidade do LED verde 0 a 255
    analogWrite(LED_AZ, 0);             // controla intensidade do LED azul 0 a 255
    analogWrite(LED1, 0);               // controla intensidade do LED1
    analogWrite(LED1, POT1_ESTADO / 4); // controla intensidade LED1
    delay(1000);
}
