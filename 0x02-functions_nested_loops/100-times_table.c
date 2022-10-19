#include "main.h"

/**
 * print_times_table - This prints the times table of the input,
 * starting with 0
 * @n: The value of the times table to be printed
 */
void print_times_table(int n)
{
	int num, nam, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (nam = 1; nam <= n; nam++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num + nam;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
