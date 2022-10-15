#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char nam = 'a';

	while (nam <= 'z')
	{
		if (nam != 'e' && nam != 'q')
		{
			putchar(nam);
		}
		nam++;
	}
	putchar('\n');
	return (0);
}
