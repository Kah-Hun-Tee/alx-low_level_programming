#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this program generates random valid passwords for
 * the program 101-crackme
 * Return: Always 0 (success)
 */

int main(void)
{
	int passWord[100];
	int a, sum, b;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		passWord[a] = rand() % 78;
		sum += (passWord[a] + '0');
		putchar(passWord[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
