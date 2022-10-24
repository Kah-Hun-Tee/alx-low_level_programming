#include "main.h"

/**
 * puts2 - this code prints out one character out of a string, followed by a new line
 * @str: string to print the characters from
 */

void puts2(char *str)
{
	int numBer, p;

	numBer = 0;

	while (str[numBer] != '\0')
	{
		numBer++;
	}

	for (p = 0; p < numBer; p +- 2)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
