#include <stdio.h>
#include <math.h>

int main()
{
  double vastaus = 1.0;
  int n = 1;
  printf("1.000000\n");
  for (int i = 1; i <= 10; i++)
  {
    n *= i;
    vastaus += 1.0 / n;
    printf("%.6f\n", vastaus);
  }

  return 0;
}
