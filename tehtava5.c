/* Tehdään ohjelma,joka laskee maksettavan palkan, tuntipalkan
tehtyjen tuntien ja veron mukaan. 40 tuntia ylittäviltä
tunneilta maksetaan palkka 1,5 kertaisena */

#include <stdio.h>
int main(void)
{
    double Tuntipalkka,
    Tehdyt_tunnit,
    Bruttopalkka,
    Veroprosentti,
    Nettopalkka,
    Veron_osuus,
    Tyoaika,
    Ylityo_palkka,
    Ylityo;

         printf("Syötä tuntipalkka > ");                            // kysytään käyttäjältä tuntipalkka
         scanf("%lf",&Tuntipalkka);                                 // luetaan sisään käyttäjän tuntipalkka

         printf("Syötä tehdyt tunnit > ");                          // kysytään käyttäjältä tehtyjen tuntien määrä
         scanf("%lf",&Tehdyt_tunnit);                               // luetaan sisään tehdyt tunnit
    
         printf("Syötä veroprosentti > ");                          // kysytään veroprosentti
         scanf("%lf",&Veroprosentti);                               // luetaan sisään veroprosentti

    if(Tehdyt_tunnit > 40)
{
    Ylityo = (Tehdyt_tunnit-40),

    Ylityo_palkka = Tuntipalkka * 1.5,

    Tyoaika = 40;

    Bruttopalkka = (Tuntipalkka * Tyoaika) + Ylityo * Ylityo_palkka;                // lasketaan bruttopalkka

    Veron_osuus = (Veroprosentti/100.0)*Bruttopalkka;
 
    Nettopalkka = Bruttopalkka - Veron_osuus;                       //lasketaan nettopalkka

         printf("Nettopalkkasi on %.2lf euroa ja verottajan osuus on %.2lf euroa",Nettopalkka, Veron_osuus);
                                                                    // tulostetaan nettopalkka ja verottajan osuus
}

    else
{
    Bruttopalkka = Tuntipalkka * Tehdyt_tunnit;

    Veron_osuus = (Veroprosentti/100.0)*Bruttopalkka;

    Nettopalkka = Bruttopalkka - Veron_osuus;

         printf("Nettopalkkasi on %.2lf euroa ja verottajan osuus on %.2lf euroa",Nettopalkka, Veron_osuus);
}




return(0);
}