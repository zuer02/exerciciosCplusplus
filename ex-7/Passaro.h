#include <iostream.h>

using namespace std;
/*
ANOT.:
dependencia é uma dependencia leve de boa
agregação é +-
composição é fudido
agregacao é tipo o exemplo do carro lá do motor, q se excluir o carro o motor ta de boa tranquilo, ainda existe
composição seria se esse motor fosse criado dentro do construtor do carro, ai no main quando fosse excluir excluia tudo
  */
class Passaro
{
  protected:
    int id;
    char nome[20];
    float peso;
    float preco;

  public:
    Passaro(int nId, char nNome[20], float nPeso, float nPreco) {
       id = nId;
       strcpy(nome,nNome);
       peso = nPeso;
       preco = nPreco;
    }

    int getId() { return id; }
    char* getNome() { return nome; }
    float getPeso() { return peso; }
    float getPreco() { return preco; }
};

class PassaroImportado : public Passaro
{
   private: 
     char paisDeOrigem[30];
     char codigoIbama[10];
   public:
     PassaroImportado(int nId, char nNome[20], float nPeso, float nPreco, 
                    char pais[30]) 
     : Passaro(nId, nNome, nPeso, nPreco)
     {
       strcpy(paisDeOrigem, pais);
     }

    void legaliza(char nCodigoIbama[10]) {
      strcpy(codigoIbama, nCodigoIbama);
      cout<<"Passaro "<< nome <<" foi legalizado com codigo "<< codigoIbama;
    }
  
    float getPreco() { return preco * 1.20; }
    float getPreco(float perc) { return preco * perc; }
    char* getPaisDeOrigem() { return paisDeOrigem; }
    char* getCodigoIbama() { return codigoIbama; }
};
