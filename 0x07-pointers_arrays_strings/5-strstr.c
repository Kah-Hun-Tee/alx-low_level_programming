#include "main.h"
#include <stdio.h>

/**
 * *_strstr - this code locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int p, q;

	for (p = 0; haystack[p] != '\0'; p++)
	{
		for (q = 0; needle[q] != '\0'; q++)
		{
			if (haystack[p + q] != needle[q])
				break;
		}
		if (!needle[q])
			return (&haystack[p]);
	}

	return (NULL);
}
