# Olimpiadas Teleco Microbit
Charla de Micro:Bit y Arduino IDE

http://olimpiadasteleco.com

Marzo 2023 - Escola de Enxeñaría de Telecomunicación - Universidade Vigo

1. Introducción a Micro:bit

2. Programación con Makecode

  https://makecode.microbit.org/

3. Programación con Arduino IDE

https://www.arduino.cc/en/software

- 3.1. Instalación librería placa nRF5

  Añadir la siguiente ruta en el gestor de placas de las Preferencias de Arduino IDE
  
  ```
    https://sandeepmistry.github.io/arduino-nRF5/package_nRF5_boards_index.json
  ```
  Una vez añadido, desde el gestor de placas buscar nRF5 o Micro:bit e instalar "Nordic Semiconductor nRF5 Boards"
  
  Ya podemos selecionar nuestra placa desde "Herramientas> Placa > Nordic Semiconductor nRF5 Boards > BBC Micro:bit V2"
  
  Una vez conectado por USB la Micro:bit al ordenador, podemos selecionarla desde "Herramientas > Puerto"
  
- 3.2. Primer código Blink

 ```c
const int botonA = 5;     // Numero de pin del botón
const int botonB = 11;     // Numero de pin del botón

void setup() {  
  Serial.begin(9600);
  Serial.println("microbit activo!");

  pinMode(botonA, INPUT);  
  pinMode(botonB, INPUT);    
}

void loop(){
  if (! digitalRead(botonA)) {
    Serial.println("Botón A pulsado");
  }
  if (! digitalRead(botonB)) {
    Serial.println("Botón B pulsado");
  }
  delay(10);
}
 ```
 
 - 3.3. Código "Botones"

 ```c
#include <Adafruit_Microbit.h>
Adafruit_Microbit_Matrix microbit;

const uint8_t
  smile_bmp[] =
  { B00000,
    B01010,
    B00000,
    B10001,
    B01110, };
    
void setup() {
  Serial.begin(9600);
  Serial.println("microbit matrix demo is ready!");
  microbit.begin();
}

void loop() {
  microbit.show(microbit.HEART);
  delay(1000);

  microbit.show(smile_bmp);
  delay(1000);

}
 ```
- 3.2. Instalación librerías

  
  
   
