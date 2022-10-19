#include <stdio.h>

/**
 * main - This prints first 50 fibonacci numbers, starting with 1 and 2,
 * seperated by comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int firstNumbers;
	unsigned long fiba = 0, fibo = 1, sum;

	for (firstNumbers = 0; firstNumbers < 50; firstNumbers++)
	{
		sum = fiba + fibo;
		printf("%lu", sum);

		fiba = fibo;
		fibo = sum;

		if (firstNumbers == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
