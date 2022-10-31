#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - this code prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int p;

	unsigned int numBer1, numBer2;

	numBer1 = 0;
	numBer2 = 0;

	for (p = 0; p < size; p++)
	{
		numBer1 += a[(size * p) + p];
		numBer2 += a[(size * (p + 1)) - (p + 1)];
	}
	printf("%d, %d\n", numBer1, numBer2);
}
