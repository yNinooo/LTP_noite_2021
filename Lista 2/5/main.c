#include <stdio.h>

int main(void) 
{

  int tmp_rad;

  printf("\ndigite a temperatura simulada do radiador: ");
  scanf ("%i", &tmp_rad);

  if (tmp_rad >= 90) 
  {
    printf ("Ventoinha ligada;");
    tmp_rad = 70;
  }

  printf ("\nTemperatura do raidador: %i°C", tmp_rad);

  return 0;
}
