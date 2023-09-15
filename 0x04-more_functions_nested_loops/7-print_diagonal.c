#include "main.h"

/**
 * print_diagonal - print a diagonal line using the character '\'
 *
 * @n: number of times the '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int x, y;

		for (x = 0; x < n; x++)
		{
			for (y = 0; y <= x; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
