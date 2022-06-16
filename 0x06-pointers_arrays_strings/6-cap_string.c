#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: the string being capitalized
 * Return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (!(s[index] >= 97 && s[index] <= 122))
			s[index] = s[index] - 32;
		if (s[index - 1] == ' ' ||
				s[index - 1] == '\t' ||
				s[index - 1] == '\n' ||
				s[index - 1] == ',' ||
				s[index - 1] == ';' ||
				s[index - 1] == '.' ||
				s[index - 1] == '!' ||
				s[index - 1] == '?' ||
				s[index - 1] == '"' ||
				s[index - 1] == '(' ||
				s[index - 1] == ')' ||
				s[index - 1] == '{' ||
				s[index - 1] == '}' ||
				index == 0)
		{
			if (s[index + 1] >= 97 && s[index + 1] <= 122)
			{
				s[index + 1] -= 32;
			}
		}
		index++;
	}
	return (s);
}
