#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @n: input value
 *
 * Return: string
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] += ('A' - 'a');
	}
	i = 0;
	while (n[i])
	{
		switch (n[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
					n[i + 1] += ('A' - 'a');
				}
		}
		i++;
	}
	return (n);
}
