#include <stdio.h>

int main(void) {

  int v1, v2 = 1;

  printf("Digite qualquer número para criar poção ou 0 sair: ");
  scanf("%d", &v1);

  while (v1 != 0 && v2 != 0) {

    printf("1 = morango\n2 = cacto\n3 = lavanda\n4 = trigo\n");
    printf("Digite o primeiro elemento:");
    scanf("%d", &v1);

    printf("Digite o segundo elemento:");
    scanf("%d", &v2);

    if (v1 == 1 && v2 == 2) {
      printf("Sangue de boi");
    } else if (v1 == 1 && v2 == 3) {
      printf("Morango Chernobyl");
    } else if (v1 == 2 && v2 == 4) {
      printf("Poção detox");
    } else if (v1 == 2 && v2 == 3) {
      printf("Poção alfafa");
    } else if (v1 == 4 && v2 == 1) {
      printf("Poção breja do brejo");
    } else if (v1 == 4 && v2 == 3) {
      printf("Lanvada de Vândala");
    }
    if (v1 != 1 && v1 != 2 && v1 != 3 && v1 != 4){
      printf("\nIngrediente 1 invalido");
  }
   if (v2 != 1 && v2 != 2 && v2 != 3 && v2 != 4){
    printf("\nIngrediente 2 invalido");
  }

  printf("\n\nDigite qualquer número para criar poção ou 0 sair: ");
  scanf("%d", &v1);
}
}