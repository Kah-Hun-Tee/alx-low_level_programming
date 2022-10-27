#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to copy
 *Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p = 0;

	while (src[p] != '\0' && p < n)
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}

	return (dest);
}
