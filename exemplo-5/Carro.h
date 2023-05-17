#include <string.h>
#include "Motor.h"

class Carro
{
  private:
	char cor[20];
	char modelo[30];
	float velocAtual;
	float velocMaxima;
	bool ligado;
	Motor motor;
  public:
     Carro( ) {
	ligado = false;
	strcpy(cor, "branco");
	strcpy(modelo, "FIAT");
	velocAtual = 0;
	velocMaxima = 100;
      }

   Carro ( char novaCor[20], char novoMod[30], float novaVMaxima, Motor m )
   {
	ligado = false;
	strcpy(cor, novaCor);
	strcpy(modelo, novoMod);
	velocAtual = 0;
	velocMaxima = novaVMaxima;
	motor = m;
   }

   void setVelocAtual(float novaVeloc) { velocAtual = novaVeloc; }
   float getVelocAtual() {  return velocAtual; }

   void setVelocMaxima(float novaVeloc) { velocMaxima = novaVeloc; }
   float getVelocMaxima() { return velocMaxima; }

   void setCor(char novaCor[20]) { strcpy(cor, novaCor); }
   char* getCor() { return cor; }

   void setModelo(char novoModelo[30]) { strcpy(modelo, novoModelo); }
   char* getModelo() { return modelo; }

   Motor getMotor() {
	return motor;
   }

   void liga () { velocAtual = 0; ligado = true; }
   void desliga () { velocAtual = 0; ligado = false; }

   void acelera (float quantidade) {
	if (ligado && velocAtual < velocMaxima) 
	  if(velocAtual + quantidade < velocMaxima)
	    velocAtual += quantidade; 
	  else velocAtual = velocMaxima;
   }

   void breca (float quantidade) {
	if (ligado && velocAtual > 0) 
	  if(velocAtual - quantidade >= 0)
	    velocAtual -= quantidade;
	  else velocAtual = 0;
   }
};
