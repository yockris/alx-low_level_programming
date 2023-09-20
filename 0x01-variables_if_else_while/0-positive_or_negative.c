#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);
	return (0);
}
