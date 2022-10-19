#include "main.h"

/**
 * times_table - this function prints the 9 times table, starting with 0.
 * Return: 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		putchar('0');

		for (j = 1; j < 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = j * i;

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
