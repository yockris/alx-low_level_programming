#include "main.h"
#include <stdio.h>

/**
 * puts_half - will Print half of string.
 * @str: parameter char pointer
 * Return: (0) success
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		a++;
	}
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
