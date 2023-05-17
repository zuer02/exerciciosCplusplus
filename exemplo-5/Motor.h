#include <string.h>


class Motor 
{
      private:
              int potencia;
              char tipo[10];
      public:
              Motor ( ) {
                potencia = 0;
                strcpy( tipo, "0v" );
              }
              Motor ( int novaPotencia, char novoTipo[10] ) {
                potencia = novaPotencia;
                strcpy( tipo, novoTipo );
              }

              int getPotencia() {
                return potencia;
              }
              char* getTipo() {
                return tipo;
              }
};
