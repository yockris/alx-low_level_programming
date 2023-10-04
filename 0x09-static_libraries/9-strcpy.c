#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - will Copies the string pointed to by src.
 * @dest: parameter char pointer
 * @src: parameter char pointer
 * Return: (0) success
 */
char *_strcpy(char *dest, char *src)
{

	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
