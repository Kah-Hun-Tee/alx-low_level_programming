#include "main.h"

/**
 * times_table - this prints the 9 times table, starting with 0.
 * Return: 0
 */

void times_table(void)
{
	int line1, line2, line3;

	for (line1 = 0; line1 <= 9; line1++)
	{
		_putchar(0);
		for (line2 = 1; line2 <= 9; line2++)
		{
			_putchar(',');
			_putchar(' ');
			line3 = line1 * line2;
			if (line3 <= 9)
				_putchar(' ');
			else
				_putchar((line3 / 10) + '0');
			_putchar((line3 % 10) + '0');
		}
		_putchar('\n');
	}
}
