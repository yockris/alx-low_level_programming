#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - the Funtion that prints the chessboard.
 * @a: prototype char str
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int x, b;

	x = 0;
	while (x < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar(a[x][b]);
			b++;
		}
		_putchar('\n');
		x++;
	}
}
