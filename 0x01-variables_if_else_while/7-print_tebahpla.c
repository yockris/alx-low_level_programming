#include <stdio.h>

/**
 * main - progran will print alphabet is reverse
 *
 * Return: (0) success
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
