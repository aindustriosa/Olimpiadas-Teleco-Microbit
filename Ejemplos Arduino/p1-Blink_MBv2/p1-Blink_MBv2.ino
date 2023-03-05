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