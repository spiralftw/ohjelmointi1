// isnpiraatioita https://www.programiz.com/c-programming/examples/array-largest-element
#include <stdio.h>

int tulostus(int taulukko1[], int n);
int keskiarvo(int taulukko1[], int n);
int suurinjaindeksi(int taulukko1[], int n);



int main (void)
{

int taulukko1[10];
    int laskuri = 0,
        keskia = 0;

        printf("Syota 10 kokonaislukua (0-100)\n");
    
            for(laskuri = 0; laskuri < 10; laskuri ++)
            {
                
                printf("Anna %d. kokonaisluku > ",(laskuri + 1));
                    scanf("%d",&taulukko1[laskuri]);
                        while(taulukko1[laskuri] > 100 || taulukko1[laskuri] < 0)
                        {
                            printf("Ei kelpaa, anna %d kokonaisluku uudestaan > ",(laskuri + 1));
                                scanf("%d",&taulukko1[laskuri]);
                        }
                                    
            }

                                           
                                               
tulostus(taulukko1, 10);

    suurinjaindeksi(taulukko1, 10);

                keskiarvo(taulukko1, 10);
    
        


return(0);
}



                                              
int tulostus(int taulukko1[], int n)
{
int laskuri = 0;

printf("Taulukon:\n");

    for(laskuri = 0; laskuri < n; laskuri++ )
    {
        printf("%d ",taulukko1[laskuri]);
    }
            return(0);
}




int suurinjaindeksi(int taulukko1[], int n)
{

int
suurin = 0,
indeksi = 0,
laskuri = 0;

for(laskuri = 1; laskuri < n; laskuri++ )
{
    if(taulukko1[0] <  taulukko1[laskuri])
   {
    
        taulukko1[11] = taulukko1[laskuri];
            indeksi++;    

   }
    suurin = taulukko1[11];
}

    printf("\nSuurin arvo on %d, ja se sijaitsee paikassa %d",suurin,indeksi);

        return(0);

}







int keskiarvo(int taulukko1[], int n)
{

int 
laskuri = 0;
double
yhteensa = 0,
keskiarvo = 0;


    for(laskuri = 0; laskuri < n; laskuri++ )
    {
        
            yhteensa = yhteensa + taulukko1[laskuri];
    
    }
            keskiarvo = yhteensa / n;

                printf("\nTaulukon arvojen keskiarvo on %.3lf",keskiarvo);

                    return(0);
}
                    





    

