#include <stdio.h>
#include <stdlib.h>

int main()
{

  int luku1;
  int luku2;

  char str1[10];
  printf("Anna 1. luku > ");
  fgets(str1, sizeof str1, stdin);
  sscanf(str1, "%d", &luku1);

  char str2[10];
  printf("Anna 2. luku > ");
  fgets(str2, sizeof str2, stdin);
  sscanf(str2, "%d", &luku2);

  int yhteensa = luku1 + luku2;
  printf("Lukujen %d ja %d summa on %d\n", luku1, luku2, yhteensa);

  return 0;
}
