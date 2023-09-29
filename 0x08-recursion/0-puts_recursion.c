#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 * followed by a new line.
 * @s: parameter string
 * Return: (0) success
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
