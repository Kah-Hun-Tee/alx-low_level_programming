#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	unsigned long int p, q, r, q1, q2, r1, r2;

	q = 1;
	r = 2;

	printf("%lu", q);

	for (p = 1; p < 91; p++)
	{
		printf(", %lu", r);
		r = r + q;
		q = r - q;
	}

	q1 = q / 1000000000;
	q2 = q % 1000000000;
	r1 = r / 1000000000;
	r2 = r % 1000000000;

	for (p = 92; p < 99; ++p)
	{
		printf(", %lu", r1 + (r2 / 1000000000));
		printf("%lu", r2 % 1000000000);
		r1 = r1 + q1;
		q1 = r1 - q1;
		r2 = r2 + q2;
		q2 = r2 - q2;
	}

	printf("\n");

	return (0);
}
