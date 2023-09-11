#include <stdio.h>

/**
 * main - the progran will display all
 * numbers of base 16
 *
 * Return: (0) success
 */

int main(void)
{
	int i;

	char a[16] = "0123456789abcdef";
	char b;

	i = 0;

	while (i < 16)
	{
		b = a[i];
		putchar(b);
		i++;
	}

	putchar('\n');
	return (0);
}
