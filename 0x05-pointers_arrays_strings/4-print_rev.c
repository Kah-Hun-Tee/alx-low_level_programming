#include "main.h"

/**
 * print_rev - this code prints a string in reverse, followed by a new line
 * @s: the string to be printed in reverse
 */

void print_rev(char *s)
{
	int p, q;

	q = 0;
	while (s[q] != '\0')
		q++;

	for (p = q - 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
