#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - this prints all natural numbers from n to 98,
 * followed by a new line
 * @w: An input integer
 * Return: 0
 */

void print_to_98(int w)
{
	if (w >= 98)
	{
		while (w > 98)
			printf("%d, ", w--);
		printf("%d\n", w);
	}
	else
	{
		while (w < 98)
			printf("%d, ", w++);
		printf("%d\n", w);
	}
}
