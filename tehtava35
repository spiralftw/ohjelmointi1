#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int oikein = 0;
  int vaarin = 0;

  srand(time(0));

  while (1)
  {

    int tehtavan_tyyppi = rand() % 2;


    int a = rand() % 9 + 1;
    int b = rand() % 9 + 1;


    if (tehtavan_tyyppi == 1)
    {
      int jakojannos = rand() % a + 1;
      b = a * jakojannos;
      a = jakojannos;
    }

    int vastaus;

    char esitysmuoto[100];
    if (tehtavan_tyyppi == 0)
    {
      sprintf(esitysmuoto, "Paljonko on %d kertaa %d?", a, b);
      vastaus = a * b;
    } 
    else
    {
      sprintf(esitysmuoto, "Paljonko on %d jaettuna %d?", b, a);
      vastaus = b / a;
    }

    int luku;
    while (1)
    {
      printf("Anna luku -1 lopettaaksesi\n%s ", esitysmuoto);
      scanf("%d", &luku);

      if (luku == -1) {
        printf("Sait %d vastausta oikein, ja %d meni pikkuisen pieleen\n", oikein, vaarin);

        // Tulosta arvosana
        if (oikein > vaarin)
        {
          printf("Arvosanasi on : \"Hyvaksytty\"");
        }
        else
        {
          printf("Arvosanasi on : \"Hylatty\"");
        }

        return 0;
      } 
      else if (luku == vastaus)
      {
        oikein++;
        printf("Oikein!\n");
        break;
      }
      else
      {
        vaarin++;
        printf("Väärin, yritä uudelleen > ");
      }
    }
  }
}
