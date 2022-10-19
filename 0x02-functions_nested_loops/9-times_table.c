#include "main.h"

/**
 * times_table - This prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int row;
	int column;
	int prod;

		for (row = 0; row <= 9; row++)
		{
			_putchar('0');

			for (column = 1; column <= 9; column++)
			{
				_putchar(',');
				_putchar(' ');

				prod = row * column;

				if (prod <= 9)
					_putchar(' ');
				else
					_putchar((prod / 10) + '0');

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
}
