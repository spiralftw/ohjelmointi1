
//inspiraatioita otettu:https://www.javatpoint.com/perfect-number-program-in-c

#include <stdio.h>


int onkoLukuTaydellinen(int luku);

int main(void)
{
int luku = 0;

    onkoLukuTaydellinen(luku);

    
    
    

  
    
  return(0);
}



        int onkoLukuTaydellinen(int luku)
        {
        int pienin = 1, suurin = 10000, vastaus, i;
        for(luku = pienin; luku <= suurin; luku++)  
        {  
        for(i = 1, vastaus = 0; i < luku; i++)  
                                     {  
                                            if(luku % i == 0)  
                                            vastaus = vastaus + i;  
                                      }  
                              if(vastaus == luku)  
                             printf("\nLuku %d on taydellinen luku", luku); 
                      }
        return(luku);
        }      
        