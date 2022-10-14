#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char nam;

	for (nam = 'a'; nam <= 'z'; nam++)
	putchar(nam);
	putchar ('\n');
	return (0);
}
