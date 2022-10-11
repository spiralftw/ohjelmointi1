/*tehdään sovellus, joka laskee työtekijälle
maksettavan palkan tehtyjen tuntien,
tuntipalkan ja perittävän veron määrän perusteella*/ 
#include <stdio.h>
int main()
{
    double Tuntipalkka,
    Tehdyt_tunnit,
    Bruttopalkka,
    Veroprosentti,
    Nettopalkka,
    Veron_osuus;

     printf("Syötä tuntipalkka > ");                                                         // kysytään käyttäjältä tuntipalkka
     scanf("%lf",&Tuntipalkka);                                                               // luetaan sisään käyttäjän tuntipalkka

     printf("Syötä tehdyt tunnit > ");                                                        // kysytään käyttäjältä tehtyjen tuntien määrä
     scanf("%lf",&Tehdyt_tunnit);                                                             // luetaan sisään tehdyt tunnit
    
    printf("Syötä veroprosentti > ");
    scanf("%lf",&Veroprosentti);

     Bruttopalkka = Tuntipalkka * Tehdyt_tunnit;                                               // lasketaan bruttopalkka

     Nettopalkka = Bruttopalkka * (100 - Veroprosentti)/100;                                   //lasketaan nettopalkka

     Veron_osuus = (Veroprosentti/100.0)*Bruttopalkka;

     printf("Nettopalkkasi on %.2lf euroa josta veron osuus on %.2lf euroa : ",Nettopalkka, Veron_osuus);                           // tulostetaan bruttopalkka

return(0);
}