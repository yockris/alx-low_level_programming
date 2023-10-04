#include <stdio.h>

/**
 *main - prints name folowed by a new line.
 *@argc: type int argument count
 *@argv: type int argument vector
 *Return (0) success
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
