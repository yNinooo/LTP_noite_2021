#include <stdio.h>

int main(void) {

  float R1;
  float R2;
  float R3;
  float R4;
  float Req;
  float Reqq;

  printf ("Digite o valor de R1 [Ω]\n");
  scanf ("%f", &R1);

  printf ("Digite o valor de R2 [Ω]\n");
  scanf ("%f", &R2);

  printf ("Digite o valor de R3 [Ω]\n");
  scanf ("%f", &R3);

  printf ("Digite o valor de R4 [Ω]\n");
  scanf ("%f", &R4);

  Req = R1 + R2 + R3 + R4;

  if (Req > 1000) {
    Reqq = Req /1000;
    printf ("A resistência equivalente dos quadro resistores em série é de %.3fkΩ", Reqq);
  }
  else {
  printf ("A resistência equivalente dos quadro resistores em série é de %.2fΩ", Req);
  }
}
