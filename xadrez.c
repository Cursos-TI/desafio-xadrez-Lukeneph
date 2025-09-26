#include <stdio.h>

int main() {

      int Torre = 5;
      int Bispo = 5;
      int Rainha = 8;

   printf("Torre\n");
   for(int i = 0; i < Torre; i++) {
      printf("Direita (%d)\n", i + 1);
   }
   printf(" \n");

   printf("Bispo\n");
   int Bispo_matematico = 0;
   while (Bispo_matematico < Bispo) {
      printf("Cima e Direita (%d)\n", Bispo_matematico + 1);
      Bispo_matematico++;
   } 
   printf(" \n");


   printf("Rainha\n");
   int Rainha_matematico = 0;
   do {
      printf("Esquerda (%d)\n", Rainha_matematico + 1);
      Rainha_matematico++;
   } while (Rainha_matematico < Rainha);
   printf(" \n"); 

    return 0;
}