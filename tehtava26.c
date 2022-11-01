#include <stdio.h>

int korotaKokonaislukuPotenssiin (int luku, int potenssi);

int main()
{
int
luku = 0,
potenssi = 0,
vastaus = 0;

printf("Syota luku > ");
scanf("%d",&luku);

printf("Syota potenssi > ");
scanf("%d",&potenssi);



vastaus = korotaKokonaislukuPotenssiin(luku, potenssi);


printf("Luku %d korotettuna potenssiin %d on %d",luku,potenssi,vastaus);

return(0);    
}



    int korotaKokonaislukuPotenssiin (int luku, int potenssi)
    {
        int vastaus = 1;

            while(potenssi != 0)
            {
            vastaus *= luku;
            potenssi--;
            
            }
            

    return(vastaus);
        }
    

  