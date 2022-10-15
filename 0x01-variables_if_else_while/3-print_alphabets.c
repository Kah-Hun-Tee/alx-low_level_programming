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
		putchar(nam);
	for (nam = 'A'; nam <= 'Z'; nam++)
		putchar(nam);
	putchar('\n');
	return (0);
}
