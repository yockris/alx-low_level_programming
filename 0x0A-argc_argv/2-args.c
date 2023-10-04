#include <stdio.h>

/**
 * main - prints all arguments received.
 * @argc: type int argument count
 * @argv: type char argument vector
 * Return: none
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
