#include "main.h"

/**
 * _puts - this code prints a string
 *@str: pointer to the string
 */
void _puts(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
