#include <iostream>
#include "Passaro.h"

using namespace std;

int main(void)
{
 PassaroImportado passaroI(1010, "Aguia", 2, 2000, "EUA");

  cout<< "\nPassaro Importado:\n";
  cout<< "Nome: " << passaroI.getNome() <<"\n";
  cout<< "Peso: " << passaroI.getPeso() << "\n";
  cout<< "Preco: " << passaroI.getPreco() << "\n";
  cout<< "Pais de Origem: " << passaroI.getPaisDeOrigem() << "\n";

  passaroI.legaliza("AEUA1010");

  cout<< "\n\nCodigo do Ibama: " << passaroI.getCodigoIbama() << "\n";
}
