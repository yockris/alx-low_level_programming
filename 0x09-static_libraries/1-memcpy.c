#include "main.h"
#include <stdio.h>

/**
 * _memcpy - The function that copies memory to area
 * @dest: prototype char pointer
 * @src: prototype char memory area
 * @n: prototype char bytes from src to dest
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
