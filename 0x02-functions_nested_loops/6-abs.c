#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: integer to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
