#include <stdio.h>
#include <unistd.h>

int main(void) 
{

  while (1)
  {
    printf ("\nAceso");
    sleep (2);

    printf ("\nApagado");
    sleep (2);
  }

  return 0;
}
