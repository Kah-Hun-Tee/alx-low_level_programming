#include "main.h"

/**
 *print_number - this code prints an integer;
 *@n: integer to be printed;
 */

void print_number(int n)
{
	unsigned int numBer;

	if (n < 0)
	{
		numBer = -n;
		_putchar('-');
	} else
	{
		numBer = n;
	}

	if (numBer / 10)
		print_number(numBer / 10);

	_putchar((numBer % 10) + '0');
}

