#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program will assign
 * A random number to the variable n
 * each time it is executed using
 * random numbers generator function
 *
 * Return: (0) success
*/

int main(void)
{
int n;
int a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
	if (a > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, a);
	if (a == 0)
	printf("Last digit of %d is %d and is 0\n", n, a);
	if (a < 6 && a != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
return (0);
}
