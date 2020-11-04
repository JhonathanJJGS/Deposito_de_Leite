#include <Arduino.h>
#define ENA 13 // Enable ativa os drivers do motor
#define MS1 12 // Seleciona a resolução do passo
#define MS2 11 // Seleciona a resolução do passo
#define MS3 10 // Seleciona a resolução do passo 
#define RST 9 // Desativa os drivers de saída
#define SLP 8 // Inicia um descanso para algumas funções do drive
#define STP 7 // Avanço do passo
#define DIR 6 // Direção do passo
//Controle
int passo = 0;    // passos
int temp = 1000;  // tempo entre os passos 




void Horario() {                // Sentido Horário
  passo = 0;     
  digitalWrite(DIR, HIGH);
}
void AntiHorario()  {               // Sentido Anti-Horário 
  passo = 0;
  digitalWrite(DIR, LOW);
}

void volta() {
  Horario();  
  while (400 > passo)
  {      
    digitalWrite(STP, LOW);
    delayMicroseconds(temp); 
    digitalWrite(STP, HIGH);
    delayMicroseconds(temp);
    passo++; 
  }
  passo = 0; 
  digitalWrite(ENA, HIGH);  // Ativa o A4988
  delay(10);    
  delay(1000);
  digitalWrite(ENA, LOW);   // Desativa o A4988
  delay(10);
  AntiHorario();      
  while (400 > passo) 
  {      
    digitalWrite(STP, LOW);
    delayMicroseconds(temp);
    digitalWrite(STP, HIGH);
    delayMicroseconds(temp);
    passo++;
  }
  passo = 0;
}



