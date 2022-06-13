#include "main.h"
/**
 * digit - checks if input is a digit
 * @n: input
 * Return: digit
 */
int digit(unsigned int n)
{
	return (n >= '0' && n <= '9');
}
/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int x, y;
	int sign;

	sign = 1;
	x = 0;
	for (y = 0; s[y] != '\0'; y++)
	{
		if (digit(s[y]))
		{
			x = (s[y] - 48) + x * 10;
			if (s[y + 1] == ' ')
				break;
		}
		else if (s[y] == '-')
		{
			sign *= -1;
		}
	}
	return (x * sign);
}

