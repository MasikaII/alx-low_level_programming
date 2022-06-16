#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string being encoded
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int x;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s;

	while (*s)
	{
		for (x = 0; x <= 52; x++)
		{
			if (*s == rot13[x])
			{
				*s = ROT13[x];
				break;
			}
		}
		s++;
	}
	return (p);
}
