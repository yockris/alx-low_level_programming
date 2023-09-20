#include "main.h"
#include <stdio.h>

/**
 * print_array - will Print n elements of an array of int.
 * @a: parameter int pointer
 * @n: parameter Type int
 * Return: (0) success
 */
void print_array(int *a, int n)
{
	int b, num;

	num = n - 1;

	for (b = 0; b <= num; b++)
	{
		printf("%d", a[b]);

		if (b < num)
		{
			printf(", ");
		}
	}
	printf("\n");
}
