#include <stdio.h>
#include <math.h>

int main(void) {
  
  int material;
  float diametro;
  float comprimento;
  float temperatura;
  float raio;
  float res, res2;
  float r, r0, a, A, T, T0, L, R;


  printf ("Digite o número correspondente ao material do fio:\nprata [1]\ncobre [2]\nouro [3]\nalumínio [4]\ntungstênio [5]\n");
  scanf ("%i", &material);

  printf ("Indique o diâmetro do fio em centímetros [cm]: ");
  scanf ("%f", &diametro);

  printf ("Indique o comprimento do fio em centímetros [cm]: ");
  scanf ("%f", &comprimento);

  printf ("Indique a temperatura de uso em °C, se for temperatura ambiente digite 20: ");
  scanf ("%f", &temperatura);


  raio = diametro / 2;
  A = pow(raio, 2) * 3.14159265;
  T0 = 20;
  T = temperatura;
  L = comprimento;


  if (material == 1) {                   //prata
    r0 = 1.59 * pow(10,-6);
    a = 0.038;
  }
  else if (material == 2) {              //cobre
    r0 = 1.72 * pow(10,-6);
    a = 0.039;
  }
  else if (material == 3) {              //ouro
    r0 = 2.44 * pow(10,-6);
    a = 0.034;
  }
  else if (material == 4) {              //alúminio
    r0 = 2.92 * pow(10,-6);
    a = 0.039;
  }
  else if (material == 5) {              //tungstênio
    r0 = 5.6 * pow(10,-6);
    a = 0.045;
  }


  r = r0 * ( 1 + a * ( T - T0 ) ); 
  //r = resistividade, r0 = resistividade a 20°C, a = constante de temperatura
  //T = temperatura de uso, T0 = Temperatura de referencia [20°C]

  R = r * L / A;
  res = R;
  res2 = R *1000;

    printf ("\nA resistencia do fio é de %f Ω [Ohms] ou %f m Ω [mili Ohms]", res, res2);

}
