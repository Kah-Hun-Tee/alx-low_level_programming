#include "main.h"

/**
 * puts_half - this code prints half of a string, followed by a new line
 * @str: the string to be printed out
 */

void puts_half(char *str)
{
	int numBer, p, q;

	numBer = 0;

	while (str[numBer] != '\0')
	{
		numBer++;
	}

	if (numBer % 2 == 0)
	{
		for (q = numBer / 2; str[q] != '\0'; q++)
		{
			_putchar(str[q]);
		}
	} else if (numBer % 2)
	{
		for (p = (numBer - 1) / 2; p < numBer - 1; p++)
		{
			_putchar(str[p + 1]);
		}
	}
	_putchar('\n');
}
