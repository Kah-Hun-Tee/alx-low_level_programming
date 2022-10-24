#include "main.h"

/**
 * rev_string - this code reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char mass;
	int p, num1, num2;

	num1 = 0;
	num2 = 0;

	while (s[num1] != '\0')
	{
		num1++;
	}

	num2 = num1 - 1;

	for (p = 0; p < num1 / 2; p++)
	{
		mass = s[p];
		s[p] = s[num2];
		s[num2--] = mass;
	}
}
