#include <stdio.h>

int main(void) {

int a;
int b;
int c;

printf ("Insira o valor de A: ");
scanf ("%i" , &a);

printf ("Insira o valor de B: ");
scanf ("%i" , &b);

c = b;
b = a;
a = c;

printf ("Valor de A: %i\nValor de B: %i", a, b);

return 0;
}
