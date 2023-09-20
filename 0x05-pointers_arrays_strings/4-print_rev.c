#include "main.h"
#include <stdio.h>

/**
 * print_rev - will Print a string, in reverse followed by a new line.
 * @str: parameter char pointer
 * Return: (0) success
 */
void print_rev(char *str)
{
	int x;
	int let;

	for (x = 0; str[x] != 0; x++)
	{
	}
	for  (x = x - 1; x >= 0; x--)
	{
		let = str[x];
		_putchar(let);
	}
	_putchar('\n');
}
