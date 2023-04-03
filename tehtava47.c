#include <stdio.h>

int main()
{
  int pisteet[4][10];
  int juotavaa[4] = {0};
  int i = 0;
  int b = 0;

  for (b = 0; b < 4; b++)
  {
    printf("Anna juoma numero %d. pisteet\n", b + 1);
    for (i = 0; i < 10; i++)
    {
      printf("Anna arvosana (1-5) > ");
      scanf("%d", &pisteet[b][i]);
      while (pisteet[b][i] < 1 || pisteet[b][i] > 5)
      {
        printf("ARVOSANAN TULEE OLLA VALILTA 1 - 5 !\nAnna arvosana (1-5) > ");
        scanf("%d", &pisteet[b][i]);
      }
      if (pisteet[b][i] >= 3)
      {
        juotavaa[b]++;
      }
    }
  }

  for (int b = 0; b < 4; b++)
  {
    if (juotavaa[b] > 5)
    {
      printf("Juoma numero %d on kelvollista\n", b);
    }
}
    return 0;
}
