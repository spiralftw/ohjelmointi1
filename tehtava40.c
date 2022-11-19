// inspiraatiota tauluko1 kaantamiseen taulukko2 https://www.youtube.com/watch?v=gBc8fZ9aZPc

#include <stdio.h>

int main (void){


int taulukko1[10], taulukko2[10];
int laskuri = 0,
j = 0;


printf("Syota 10 kokonaislukua\n");
    
    for(laskuri = 0; laskuri < 10; laskuri ++){
        printf("Syota %d. luku > ",(laskuri +1 ));
            scanf("%d",&taulukko1[laskuri]);
    }
     for(laskuri = 0,j = 9; laskuri < 10; laskuri++, j--)
     {taulukko2[j]= taulukko1[laskuri];}

                    
                
                

            
    
    for(laskuri = 0; laskuri < 10; laskuri++ ){
        printf("%d  ",taulukko1[laskuri]);
            printf("%d\n",taulukko2[laskuri]);
    
    }




return(0);
}