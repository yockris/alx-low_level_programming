#include "main.h"
#include <stdio.h>

/**
 * swap_int - will Swap the value of two integers.
 * @a: parameter int pointer
 * @b: parameter int pointer
 * Return: (0) success
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = x;
	*a = *b;
	*b = x;
}
