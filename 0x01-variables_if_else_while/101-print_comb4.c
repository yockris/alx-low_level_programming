#include <stdio.h>

/**
 * main - the program will display all possible
 * combination of three digits
 *
 * Return: (0) success
 */

int main(void)
{
	int a;
	int b;
	int c;
	int z = 0;

	for (a = '0'; a <= '7'; a++)
	{
		for (a = '0'; a <= '8'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (a < b && b <= c && a != b && b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					z++;

					if (z < 126)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		z++;
	}
	putchar('\n');
	return (0);
}
