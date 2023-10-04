#include "main.h"
#include <stdio.h>
/**
 * _atoi - will convert string into integer.
 * @s: parameter char pointer
 * Return: (0) success
 */
int _atoi(char *s)
{
	int num, a, flag;

	flag = 1;
	a = num = 0;

	while (((s[a] < '0') || s[a] > '9') && s[a] != 0)
	{
		if (s[a] == '-')
			flag = flag * -1;
		a++;
	}
	while (((s[a] >= '0') && s[a] <= '9') && s[a] != 0)
	{
		if (num >= 0)
		{
			num = num * 10 - (s[a] - '0');
			a++;
		}
		else
		{
			num = num * 10 - (s[a] - '0');
			a++;
		}
	}
	flag = flag * -1;
	return (num * flag);
}
