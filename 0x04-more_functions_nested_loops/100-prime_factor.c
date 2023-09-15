#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143,
 * followed by a new line
 *
 * description: numbersfactor
 *
 * Return: (0) success
 */

int main(void)
{
	long int i = 612852475143;
	long int factors;

	for (factors = 2; factors < i; factors++)
	{
		if (i % factors == 0)
		{
			i /= factors;
		}
	}

	printf("%ld\n", factors);
	return (0);
}
