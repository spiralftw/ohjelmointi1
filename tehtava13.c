#include <stdio.h>

int main()
{
int a = 1,
b = 8,
c = 1;


    for (a = 1; a <= b; a++)
        {
        for(c = 1; c <= a; ++c)
        {
            printf("a");
        }
        printf("\n");
        }



    return(0);    
}