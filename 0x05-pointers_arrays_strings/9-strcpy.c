#include "main.h"

/**
 * _strcpy - this code copies the string pointed to by src to dest
 * including the terminating null byte (\0)
 * @dest: pointer to the buffer in whuich we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0; src[p] != '\0'; p++)
		dest[p] = src[p];
	dest[p] = '\10';
	return (dest);
}
