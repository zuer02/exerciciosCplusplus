#include <iostream>
#include "Animais.h"

using namespace std;

void venderA(Animal *a) {
  if (!a->getVenda()){
    cout<<"Nome:"<<a->getNome()<<"\n";
    cout<<"Preco:"<<a->getPreco()<<"\n";
    //a->Vender(); ERRADO
    a->setVenda();
    cout<<"O animal"<<a->getNome()<<" foi vendido, id:"<<a->getId()<<"\n";
      }else cout<<"O animal"<<a->getNome()<<" ja foi vendido";
  }
// O POLIMORFISMO NAO FUNCIONOU PQ QUANDO SE PEGA O PREÇO PRA MOSTRAR, MOSTRA O DA CLASSE ANIMAL E NAO O DA SUBCLASSE DO BIXO, ENTAO SE FIZER UMA FUNCAO PRO BIXO P MUDAR O PREÇO, NAO VAI PQ PEGA DA ANIMAL MSM TLGD

int main(void)
{
 PassaroImportado passaroI(1010, "Aguia-rei", 2, 2000, "Malasya", false);
 Gato gato1(1111, "Gato cafe", 5, 200, "carne de sol");
 Passaro passaro1(2222, "bem-te-vi", 0.100, 50, true);
 Gato gato2(1112, "Gato Mingau", 3, 500, "salm�o");

  venderA(&passaroI);
  venderA(&gato1);
  venderA(&passaro1);
  venderA(&gato2);
  venderA(&gato1);
}
