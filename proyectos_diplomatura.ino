/**
 * ejemplo 1.1 - incrementar contador cuando presiono pulsador
 */

  //definicion de variables globales

  int contador;    //defino variable contador como un entero

  //definicion de pines

  int Led = 13;
  int boton = 2;
  

void setup() {
  // put your setup code here, to run once:
  //inicializacion de variables
  contador = 0 ;
  
  //configuracion de pines
  pinMode(Led, OUTPUT);
  pinMode(boton, INPUT);

  //defino velocidad puerto serial
  Serial.print(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

if (boton_presionado());
{
  digitalWrite(Led,HIGH);
  contador++;
  Serial.print(contador);
}


}



bool boton_presionado()
{
  if(digitalRead(boton) == 1)
  {
    return true;
  }
  else
  {
    return false;
  }
 }
