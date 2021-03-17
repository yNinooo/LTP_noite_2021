#include <stdio.h>

int main(void) {
  
  int e_nro_1, e_nro_2, e_nro_3;


  printf ("Insira o valor de nro_1: ");
  scanf ("%i", &e_nro_1);

  printf ("Insira o valor de nro_2: ");
  scanf ("%i", &e_nro_2);

  printf ("Insira o valor de nro_3: ");
  scanf ("%i", &e_nro_3);

  if (e_nro_1 < e_nro_2) {
    if (e_nro_2 < e_nro_3) {
      printf("Ordem decrescente: %i, %i, %i", e_nro_3, e_nro_2, e_nro_1);
    }
    else if (e_nro_1 < e_nro_3) {
      printf("Ordem decrescente: %i, %i, %i", e_nro_2, e_nro_3, e_nro_1);
    }
    else {
      printf("Ordem decrescente: %i, %i, %i", e_nro_2, e_nro_1, e_nro_3);
    }
  }
  else if (e_nro_1 < e_nro_3) {
    printf("Ordem decrescente: %i, %i, %i", e_nro_3, e_nro_1, e_nro_2);
  }
    else if (e_nro_2 < e_nro_3) {
      printf("Ordem decrescente: %i, %i, %i", e_nro_1, e_nro_3, e_nro_2);
    }
    else {
      printf("Ordem crescente: %i, %i, %i", e_nro_1, e_nro_2, e_nro_3);
    }
    
return 0;
}
