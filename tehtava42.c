//inspiraatiota : https://codeforwin.org/2015/07/c-program-to-find-frequency-of-each-element-in-array.html

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int kaksinoppaa();


int main (void)
{

srand(time(NULL));

    int taulukko1[36000];
    int monikerta[36000];
    int nopat = 0,
    laskuri = 0,
    laskin = 0,
    j = 0;

        for(laskuri = 0; laskuri < 36000; laskuri ++)
            {
                kaksinoppaa();

                    scanf("%d",&taulukko1[laskuri]);
       
            }

while(j < 36000)
{
    printf("%d",taulukko1[j]);

        j++;
}
            /*
for(laskuri = 0; laskuri < 36000; laskuri ++)
    {
        laskin = 1;
        for(j = laskuri + 1; j < 3600; j ++)
        {
      
            if(taulukko1[laskuri] == taulukko1[j])
            {
                laskin++;

          
                monikerta[j] = 0;
            }
        }

        if(monikerta[laskuri] != 0)
        {
            monikerta[laskuri] = laskin;
        }
    }
printf("\nFrequency of all elements of array : \n");
    for(laskuri=0; laskuri < 3600; laskuri ++)
    {
        if(monikerta[laskuri] != 0)
        {
            printf("%d occurs %d times\n", taulukko1[laskuri], monikerta[laskuri]);
        }
    }
*/

                        return(0);
}  




int kaksinoppaa()
{
           
int tulos = 0;
          
    tulos = rand() % 12 + 2;
             
            return(tulos);
}


