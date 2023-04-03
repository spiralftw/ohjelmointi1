#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  char vastaus;
  do {
    int numero = rand() % 100 + 1;
    int arvaus;
    
    do {
      //printf("Arvaa luku väliltä 1 - 100: ");
      scanf("%d", &arvaus);

      if (arvaus < numero) {
        printf("Liian pieni luku, yrita uudelleen.\n");
      } else if (arvaus > numero) {
        printf("Liian suuri luku, yrita uudelleen.\n");
      }
    } while (arvaus != numero);

    printf("OIKEIN \n");
    printf("Haluatko yrittaa uudelleen (vastaa k, jos haluat jatkaa ja e jos et halua jatkaa pelia)?\n");
    scanf(" %c", &vastaus);
  } while (vastaus == 'k');

  return 0;
}
