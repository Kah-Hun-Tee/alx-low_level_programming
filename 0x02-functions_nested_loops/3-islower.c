#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c: An input character
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	char t;
	int lower = 0;

	for (t = 'a', t <= 'z'; t++);
	{
		if (t == c)
			lower = 1;
	}
	return (lower);
}
