#include "main.h"
#include <stdio.h>

/**
 * factorial - functions that returns the factorial
 * of a given number.
 * @n: parameter type int
 * Return: (0) success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
