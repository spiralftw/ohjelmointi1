#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int satunnainen();



int main ()
{
int taulukko1[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int luku = 0,
laskuri1 = 0,
laskuri2 = 0;

srand(time(NULL));

for(laskuri1 = 0; laskuri1 < 20; laskuri1 ++)
{   
luku = satunnainen();
int m = 0;

    for(laskuri2 = 0; laskuri2 < 20; laskuri2 ++)
    {
        if(luku != taulukko1[laskuri2])
        {
            m ++;
        }
    }       
                if(m == 20)
                {
                    taulukko1[laskuri1] = luku;
                }
                    else laskuri1 --;

    

           
      
}


for(laskuri1 = 0; laskuri1 < 20; laskuri1 ++)
{
    printf("%d ", taulukko1[laskuri1]);
}
 

    


    return(0);
}




// funktio joka palauttaa random numeron 1-20
int satunnainen()
{
int tulos = 0;
          
    tulos = rand() % 20 + 1;
             
            return(tulos);

}

