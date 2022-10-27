#include "main.h"

/**
 *_strncat - this code concatenates n bytes from a string to another
 *@dest: destination string
 *@src: source string
 *@n: number of bytes of str to concatenate
 *Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k, p;

	k = 0;
	p = 0;

	while (dest[k] != '\0')
		k++;
	while (src[p] != '\0' && p < n)
	{
		dest[k] = src[p];
		k++;
		p++;
	}

	dest[k] = '\0';

	return (dest);
}
