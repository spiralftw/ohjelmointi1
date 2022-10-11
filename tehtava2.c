/*sovellus, joka kerää käyttäjältä
tuntipalkan ja tehdyt työtunnit, jonka
jälkeen se printtaa bruttopalkan*/

/*sisällytetään direktiivi, jolla saadaan
käyttöön syöttö- ja tulostusoperaatiot (scanf ja printf)*/
#include <stdio.h>



int main()
{
    double Tuntipalkka,
    Tehdyt_tunnit,
    Bruttopalkka;

     printf ("Syötä tuntipalkka > ");                        // kysytään käyttäjältä tuntipalkka

     scanf("%lf",&Tuntipalkka);                             // luetaan sisään käyttäjän tuntipalkka

     printf("Syötä tehdyt tunnit > ");                         // kysytään käyttäjältä tehtyjen tuntien määrä

     scanf("%lf",&Tehdyt_tunnit);                           // luetaan sisään tehdyt tunnit


     Bruttopalkka = Tuntipalkka * Tehdyt_tunnit;            // lasketaan bruttopalkka
     printf("Bruttopalkkasi on %.2lf €: ",Bruttopalkka);               // tulostetaan bruttopalkka

return(0);
}