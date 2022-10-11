/* a program, that reads two numbers
from user input and checks wheter the number
inputted first can be multiplied to the number
inputted last.
*/


#include <stdio.h>

int main(void)
{
int
luku1,
luku2;


    printf("Syötä ensimmäinen luku > ");
    scanf("%d",&luku1);

    printf("Syötä toinen luku > ");
    scanf("%d",&luku2);

    if(luku2 == 0)
{
printf("Luku %d on luvun 0 monikerta",luku1);
}
    else if (luku1 % luku2 == 0)
{
printf ("Luku %d on luvun %d monikerta.",luku1, luku2);
}

    else
{    
printf ("Luku %d ei ole luvun %d monikerta.",luku1, luku2);
}


return (0);
}