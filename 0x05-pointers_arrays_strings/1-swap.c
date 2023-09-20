#include "main.h"
#include <stdio.h>

/**
 * swap_int - will Swap the value of two integers.
 * @a: parameter int pointer
 * @b: parameter int pointer
 * Return: (0) success
 */

void swap_int(int *x, int *y)
{
	int a;

	a = *x;
	*x = a;
	*x = *y;
	*y = a;
}
