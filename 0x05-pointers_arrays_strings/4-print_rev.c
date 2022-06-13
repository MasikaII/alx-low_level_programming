#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string being printed
 * Return: void
 */
void print_rev(char *s)
{
	int a;
	int b;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	b = a - 1;
	for (; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

