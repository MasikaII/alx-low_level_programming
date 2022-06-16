#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: the string being capitalized
 * Return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int index, con, count;

	char b[] = {' ', '\t', '\n', ',', ';', '.', '!',
			'?', '"', '(', ')', '{', '}', '\0'};

	con = 32;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'index' && s[index] <= 'z')
		{
			s[index] = s[index] - con;
		}
		con = 0;
		for (count = 0; b[count] != '\0'; count++)
		{
			if (b[count] == s[index])
			{
				con = 32;
				break;
			}
		}
	}
	return (s);
}
