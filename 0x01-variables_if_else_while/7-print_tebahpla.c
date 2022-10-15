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

	for (nam = 'z'; nam >= 'a'; nam++)
		putchar(nam);
	putchar('\n');
	return (0);
}
