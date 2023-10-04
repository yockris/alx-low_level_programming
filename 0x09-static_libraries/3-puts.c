#include "main.h"
#include <stdio.h>

/**
 * _puts - will Print a string, followed by a new line, to stdout.
 * @str: parameter char pointer
 * Return: (0) success
 */
void _puts(char *str)
{
	int x;
	int let;

	for (x = 0; str[x] != 0; x++)
	{
		let = str[x];
		_putchar(let);
	}
	_putchar('\n');
}
