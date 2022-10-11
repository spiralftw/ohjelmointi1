#include <stdio.h>

int main()
{
int a = 1,
b = 8,
c = 1,
d = 1,
e = 1;


    for (a = 1; a <= b; a++)
        {
        for(c = 1; c <= (b - a); c++) 
        {
        
            printf(" ");
        }
    for(d = 1; d <= a; d++)
        printf("a");
    
        printf("\n");
        }



    return(0);    
}