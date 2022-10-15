#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int p, q;

	for (p = 0; p < 9; p++)
	{
		for (q = p + 1; q < 10; q++)
		{
			putchar((p % 10) + '0');
			putchar((q % 10) + '0');
			if (p == 8 && q == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
