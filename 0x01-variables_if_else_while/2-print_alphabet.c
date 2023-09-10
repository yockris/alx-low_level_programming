#include <stdio.h>
/**
 * main - the program will print alphabets in lover cases
 * followed by a new line
 *
 * Return: (0) success
 */
int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
	
{

	putchar(letter);
	letter++;

}
	putchar('\n');
	return (0);
}
