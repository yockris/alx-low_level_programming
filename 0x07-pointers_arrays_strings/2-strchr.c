#include "main.h"
#include <stdio.h>

/**
 * _strchr - This program Locates a character in a string
 * @s: prototype char pointer
 * @c: prototype char memory area
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
