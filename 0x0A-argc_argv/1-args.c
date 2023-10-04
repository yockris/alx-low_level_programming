#include <stdio.h>

/**
 * main - prints number of arguments passed into it.
 * @argc: tye int argument count
 * @argv: type char argument vector
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
