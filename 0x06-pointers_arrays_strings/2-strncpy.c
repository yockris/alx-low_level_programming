#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - display the Function that copies a string.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)

{
	int x = 0;
	int y = 0;

	while (x != n)
	{
		dest[x] = src[y];

		if (src[x] == '\0')
		{
			dest[y] = '\0';
			break;
		}
		x++;
		y++;
	}
	while (y != n)
		dest[y++] = '\0';

	return (dest);
}
