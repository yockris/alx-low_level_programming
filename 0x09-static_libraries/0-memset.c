#include "main.h"

/**
 * _memset - The function that fills memory with a constant byte
 * @s: parameter char pointer
 * @b: Parameter char pointer
 * @n: Parameter char bytes of mem pointed by s with constant byte b
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
