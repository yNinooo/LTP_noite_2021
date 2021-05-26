#include <stdio.h>

int main(void) {

  int n_1, n_2, n_3, x;
  
  n_1 = 1;
  n_2 = 0;
  n_3 = 0;

  while (1){

    x = n_1 * n_2 * n_3;

    printf ("\n%i%i%i                %i", n_1, n_2, n_3, x);
    
    n_3 ++;

    if (n_3 == 10){
      n_3 = 0;
      n_2 ++;
    }
    if (n_2 == 10){
      n_2 = 0;
      n_1 ++;
    }
    if(x == 729){
      break;
    }
  }

  return 0;
}
