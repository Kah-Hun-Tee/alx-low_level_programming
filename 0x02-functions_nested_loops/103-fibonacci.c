#include <stdio.h>

/**
 * main - This prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fiba = 0, fibo = 1, fibsum;
	float total_sum;

	while (1)
	{
		fibsum = fiba + fibo;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			total_sum += fibsum;

		fiba = fibo;
		fibo = fibsum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
