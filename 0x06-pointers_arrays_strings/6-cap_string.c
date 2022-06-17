#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: the string being capitalized
 * Return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] += ('A' - 'a');
	}
	while (s[i])
	{
		switch (s[i])
		{
			case '\t':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] += ('A' - 'a');
				}
		}
		i++;
	}
	return (s);
}
