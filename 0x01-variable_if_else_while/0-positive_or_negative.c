#include <stlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-set a random number to the variable
 * if the number is > 0: is positive
 * if the number is 0: is zero
 * if the number is < 0: is negative
 *Return: 0
*/
int main(void)
{
int n;

srand(time(0);
n=rand() - RAND_MAX/2;
if(n > 0)
{
printf("%d is positive\n",n);
}
else if (n < 0)
{
printf("%d is negative\n",n);
else
{
printf("%d is zero\n",n);
}
return (0);
}
