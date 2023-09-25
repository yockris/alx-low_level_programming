#include "main.h"
#include <stdio.h>

/**
 * set_string - will Set the value of a pointer to a char.
 * @s: prototype char
 * @to: prototype char
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
