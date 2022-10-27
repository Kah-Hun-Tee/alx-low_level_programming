#include "main.h"

/**
 *rot13 - this code encodes a string in rot13
 *@s: string to be encoded
 *Return: the resulting string
 */

char *rot13(char *s)
{
	int p, q;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (q = 0; a[q] != '\0'; q++)
		{
			if (s[q] == a[q])
			{
				s[p] = b[q];
				break;
			}
		}
	}
	return (s);
}
