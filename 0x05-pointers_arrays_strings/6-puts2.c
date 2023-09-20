#include "main.h"
#include <stdio.h>
/**
 * puts2 - will Print one char out of 2 of a string.
 * @str: parameter char pointer
 * Return: (0) success
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
