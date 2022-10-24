#include "main.h"

/**
 * swap_int - this code swaps the values of two integers
 * @p: pointer to the first integer
 * @q: pointer to the second integer
 * Return: 0
 */

void swap_int(int *p, int *q)
{
	int g;

	g = *p;
	*p = *q;
	*q = g;
}
