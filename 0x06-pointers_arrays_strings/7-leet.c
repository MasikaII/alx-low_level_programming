#include "main.h"
/**
 * leet - encodes a string to 1337
 * @s: string being encoded
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int num1, num2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	num1 = 0;
	while (s[num1])
	{
		for (num2 = 0; num2 <= 7; num2++)
		{
			if (s[num1] == leet[num2] ||
					s[num1] - 32 == leet[num2])
				s[num1] = num2 + '0';
		}
		num1++;
	}
	return (s);
}
