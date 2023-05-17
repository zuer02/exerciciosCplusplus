#include <iostream>
#include <string.h>
using namespace std;

// se vender o msm animal 2x é pra falar q já vendeu
//no .h colocar variavel pra indicar se foi vendido ou nao e colocar no construtor
// criar um metodo venda pra mudar o valor da bool
// criar um get pra essa variavel
//colocar um if no cpp que se o get der V normal coloca o metodo de venda, else falar que foi vendido

class Animal {
  protected:
    int id;
    char nome[20];
    float peso;
    float preco;
    bool venda;

  public:
    Animal(int nId, char nNome[20], float nPeso, float nPreco) {
       id = nId;
       strcpy(nome,nNome);
       peso = nPeso;
       preco = nPreco;
        venda = false;
    }
    //void Vender(){  ERA PRA COLOCAR
    //  venda = true; UM SETTER MSM
    int getId() { return id; }
    char* getNome() { return nome; }
    float getPeso() { return peso; }
    bool getVenda() { return venda;}
    void setVenda(){ venda = true; }
    virtual float getPreco() { return preco; }
};

class Gato : public Animal {
  protected:
    char tipoRacao[20];
  
  public:
    Gato(int nId, char nNome[20], float nPeso, float nPreco, 
         char nTRacao[20]) 
    : Animal (nId, nNome, nPeso, nPreco) 
    { 
      strcpy(tipoRacao, nTRacao);
    }

    float getPreco() { return (preco * 1.30); }

    char* getTipoRacao() { return tipoRacao; }    
};

class Passaro : public Animal {
  protected:
    bool canta;
  
  public:
    Passaro(int nId, char nNome[20], float nPeso, float nPreco, 
            bool nCanta) 
    : Animal (nId, nNome, nPeso, nPreco) 
    { 
      canta = nCanta;
    }
    
    float getPreco() { return (preco * 1.05); }

    bool isCanta() { return canta; }    
};

class PassaroImportado : public Passaro{
  private: 
    char paisDeOrigem[30];
    char codigoIbama[10];
  public:
   PassaroImportado(int nId, char nNome[20], float nPeso, float nPreco, 
                    char pais[30], bool nCanta) 
    : Passaro(nId, nNome, nPeso, nPreco, nCanta)
    {
       strcpy(paisDeOrigem, pais);
    }

  void legaliza(char nCodigoIbama[10]) {
   strcpy(codigoIbama, nCodigoIbama);
   cout<<"Passaro "<<nome<<" foi legalizado com codigo "<<codigoIbama<<"\n";
  }

   float getPreco() { return (preco * 1.20); }

   char* getPaisDeOrigem() { return paisDeOrigem; }
   char* getCodigoIbama() { return codigoIbama; }
};





/*void vender(Animal *a) {
  if (!getVenda){
    cout<<"Nome:"<<nome<<"\n"<<
    cout<<"Preco:"<<preco<<"\n"<<
    venda = true;
    cout<<"O animal"<<nome<<"foi vendido, id:"<<id<<"\n"<<
      }else cout<<"O animal"<<nome<<"ja foi vendido"<<
  }*/
//    HUMM, COLOQUEI O VENDER AQUI, TEM PROBLEMA?