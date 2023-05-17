#include <iostream>
#include <string.h>
#include "Carro.h"

using namespace std;

int main(void)
{
 Motor meuMotor(500, "16v");
 
 Carro meuCarro("vermelho", "GOL", 500, meuMotor);
 meuCarro.liga();
 meuCarro.acelera(50);
 meuCarro.acelera(30);
 meuCarro.breca(10);
 
 cout<< "\n";
 cout<< "Tipo do Motor: " << meuCarro.getMotor().getTipo() << "\n";
 cout<< "Potencia do Motor: " << meuCarro.getMotor().getPotencia() <<"\n\n";
 
 cout<< "Modelo: " << meuCarro.getModelo() << "\n";
 cout<< "Cor: " << meuCarro.getCor() << "\n";
 cout<< "Velocidade Máxima: " << meuCarro.getVelocMaxima() << "\n";
 cout<< "Velocidade Atual: " << meuCarro.getVelocAtual() << "\n\n";

 cout<< "Pisando fundo..." << "\n";
 meuCarro.acelera(550);
 cout<< "Velocidade Atual: " << meuCarro.getVelocAtual() << "\n\n";

 cout<< "Parando o carro..." << "\n";
 meuCarro.breca(450);
 cout<< "Velocidade Atual: " << meuCarro.getVelocAtual() << "\n\n";
 
 cout<< "Desligando o carro..." << "\n";
 meuCarro.desliga();
 cout<< "Velocidade Atual: " << meuCarro.getVelocAtual() << "\n";

 return 0;
}

