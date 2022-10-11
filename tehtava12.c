/*a program that prints out
this chart:
Celsius  Fahrenheit
 -100     -148.00
  -90     -130.00
  -80     -112.00
  -70      -94.00
  -60      -76.00
  ....
   90      194.00
  100      212.00
  using "for" function*/


#include <stdio.h>

int main (void)
{
int celsius = -100, fahrenheit;



printf("%7s%12s","Celsius","Fahrenheit");


for(celsius = -100; celsius <= 100; celsius = celsius + 10)


{
fahrenheit = 1.8 * celsius + 32;
printf("\n%5d%9d.00", celsius, fahrenheit);

}





return(0);
}

