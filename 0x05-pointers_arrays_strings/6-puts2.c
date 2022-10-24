#include "main.h"

/**
 * puts2 - this code prints out one character out of a string,
 * followed by a new line
 * @str: string to print the characters from
 */

void puts2(char *str)
{
	int stRING;

	for (stRING = 0; str[stRING] != '\0'; stRING++)

		if (stRING % 2 == 0)
			_putchar(str[stRING]);
	_putchar('\n');
}
