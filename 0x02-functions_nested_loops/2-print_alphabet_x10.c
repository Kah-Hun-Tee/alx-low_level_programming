#include "main.h"

/**
 * print_alphabet_x10 - a function that prints ten times the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char t;
	int o;

	for (o = 0; o < 10; o++)
	{
		for (t = 'a'; t <= 'z'; t++)
			_putchar(t);
		_putchar('\n');
	}
}
