#include <stdio.h>
#include <math.h>

double pyoristaKokonaisluvuksi(double luku)
{
  return floor(luku + 0.5);
}

double pyoristaKymmenesosat(double luku)
{
  return floor(luku * 10 + 0.5) / 10;
}

double pyoristaSadasosat(double luku)
{
  return floor(luku * 100 + 0.5) / 100;
}

double pyoristaTuhannesosat(double luku)
{
  return floor(luku * 1000 + 0.5) / 1000;
}

int main(void)
{
  double luku;

  for (int i = 1; i <= 5; i++) {
    //printf("Anna luku %d: ", i);
    scanf("%lf", &luku);
    printf("\n");

    printf("%lf %lf\n", luku, pyoristaKokonaisluvuksi(luku));
    printf("%lf %lf\n", luku, pyoristaKymmenesosat(luku));
    printf("%lf %lf\n", luku, pyoristaSadasosat(luku));
    printf("%lf %lf\n", luku, pyoristaTuhannesosat(luku));
  }

  return 0;
}
