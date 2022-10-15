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
	char nam;

	for (nam = 'a'; nam <= 'z'; nam++)
		if (nam == 'q' || nam == 'e')
			continue;
	putchar('\n');
	return (0);
}
