#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - The function will
 *returns the length of a string.
 * @s: parameter type string
 * Return: (0) success
 */
int _strlen_recursion(char *s)
{
	if (*s != ('\0'))
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
