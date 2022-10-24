#include "main.h"

/**
 * _strlen - this code return the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int q;

	q = 0;

	while (s[q] != '\0')
	{
		q++;
	}
	return (q);
}
