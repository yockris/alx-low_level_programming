#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 *using the character #
 *@size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size - x; y++)
		{
			_putchar(32);
		}
			for (y = 1; y <= x; y++)
			{
				_putchar(35);
			}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
