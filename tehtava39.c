//inspiraatioita https://stackoverflow.com/questions/69392473/print-elements-of-an-array-that-appear-only-once-c
#include <stdio.h>

int uniikki(int taulukko1[]);
int main (void)
{

int taulukko1[21], taulukko2[21];
int laskuri = 0;

        //printf("Syota 20 kokonaislukua (10-100)\n");
    
            for(laskuri = 0; laskuri < 20; laskuri ++)
            {
                
                //printf("Anna %d. kokonaisluku > ",(laskuri + 1));
                printf("%d. ",(laskuri + 1));
                    scanf("%d",&taulukko1[laskuri]);


                        while(taulukko1[laskuri] > 100 || taulukko1[laskuri] < 10)
                        {
                            //printf("Ei kelpaa, anna %d kokonaisluku uudestaan > ",(laskuri + 1));
                                scanf("%d",&taulukko1[laskuri]);
                        }
            }
                            
uniikki(taulukko1);
/*

            }
 for(laskuri = 0; laskuri < 20; laskuri ++)
 {
    printf("%d\n",taulukko1[laskuri]);
 }
*/
            
    
}


int uniikki(int taulukko1[])
{



for (int laskuri = 0; laskuri < 20; ++laskuri)
{
int laskuri2 = 0;

    for (int m = 0; m < 20; ++m)
    {
                           
            if (taulukko1[laskuri] == taulukko1[m])
            {
                ++laskuri2;
            }
    }

                if (laskuri2 == 1)
                {
                    printf("%d\n", taulukko1[laskuri]);
                }
}
}
