/*a program, that prints out this chart
N      10*N   100*N  1000*N
1      10     100    1000
2      20     200    2000
3      30     300    3000
4      40     400    4000
5      50     500    5000
6      60     600    6000
7      70     700    7000
8      80     800    8000
9      90     900    9000
10     100    1000   10000
using "for"*/

#include <stdio.h>

int main(void)
{
int N,
laskuri;


printf (" N     10*N     100*N    1000*N");

for (N = 1; N < 11; N = N +1)
{
printf("\n %d     %d     %d    %d",N,10*N,100*N,1000*N);
}


return(0);
}