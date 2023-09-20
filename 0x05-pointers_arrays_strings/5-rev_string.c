#include "main.h"
#include <stdio.h>

/**
 * rev_string - will Print a string, in reverse.
 * @s: parameter char pointer
 * Return: (0) success
 */

void rev_string(char *s)
{
	int x, y;
	int let;

	for (x = 0; s[x] != 0; x++)
	{
	}
	y = 0;
	x = x - 1;
	while (y < x)
	{
		let = s[x];
		s[x] = s[y];
		s[y] = let;
		y++;
		x--;
	}
}
