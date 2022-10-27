#include "main.h"

/**
 * _strcat - this code concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the string, as a result
 */

char *_strcat(char *dest, char *src)
{
	int p, j;

	p = 0;
	j = 0;

	while (dest[p] != '\0')
		p++;
	while (src[j] != '\0')
	{
		dest[p] = src[j];
		j++;
		p++;
	}

	dest[p] = '\0';

	return (dest);
}
