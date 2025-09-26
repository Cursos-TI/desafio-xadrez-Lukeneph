#include <stdio.h>

int main() {

// Int da (Torre), (Bispo) e (Rainha) com valores definidos

      int Torre = 5;
      int Bispo = 5;
      int Rainha = 8;

// Utilizando (For) Torre indo para direita 5 vezes

   printf("Torre\n");
   for(int i = 0; i < Torre; i++) {
      printf("Direita (%d)\n", i + 1);
   }
   printf(" \n");

// Utilizando (While) Bispo indo para diagonal 5 vezes (Cima e Deireita)

   printf("Bispo\n");
   int Bispo_matematico = 0;
   while (Bispo_matematico < Bispo) {
      printf("Cima e Direita (%d)\n", Bispo_matematico + 1);
      Bispo_matematico++;
   } 
   printf(" \n");

// Utilizando (Do-While) Rainha indo para esquerda 8 vezes

   printf("Rainha\n");
   int Rainha_matematico = 0;
   do {
      printf("Esquerda (%d)\n", Rainha_matematico + 1);
      Rainha_matematico++;
   } while (Rainha_matematico < Rainha);
   printf(" \n"); 

    return 0;
}

// Resultado como sairia

// Torre
// Direita (1)
// Direita (2)
// Direita (3)
// Direita (4)
// Direita (5)
 
// Bispo    -------->    Na parte do Bispo não sei se devo colocar printf("Direita") e depois printf("Cima"), ou se devo juntar em um só, como printf("Cima e Direita").
// Diagonal Direita (1)
// Diagonal Direita (2)
// Diagonal Direita (3)
// Diagonal Direita (4)
// Diagonal Direita (5)
 
// Rainha
// Esquerda (1)
// Esquerda (2)
// Esquerda (3)
// Esquerda (4)
// Esquerda (5)
// Esquerda (6)
// Esquerda (7)
// Esquerda (8)