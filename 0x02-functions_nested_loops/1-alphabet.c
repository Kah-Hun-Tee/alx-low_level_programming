#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lowercase
 * followed by a new line
 * Return: 0
 */

void print_alphabet(void)
{
	int nam;

	for (nam = 'a'; nam <= 'z'; nam++)
		_putchar(nam);
	_putchar('\n');
}
