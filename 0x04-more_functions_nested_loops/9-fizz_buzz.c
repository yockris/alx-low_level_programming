#include <stdio.h>

/**
 *main - will print number from 1 to 100
 *display Fizz for multiples of 3 and
 *Buzz for multiple of 5 and for both 5 && 3
 *display FizzBuzz
 *
 *Return: (0) success
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (a % 3 == 0)
			printf("%s", "Fizz");
		else if (a % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
