#include <stdio.h>

/**
 * main - the progeam will display alphabets
 * without e and q
 *
 * Return: (0) success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{

		if (letter != 'e' && letter != 'q')
			putchar(letter);

	}
	putchar('\n');
		return (0);
}
