#include "main.h"
/**
 * puts_half - prints half a string
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int x, final;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	final = (x + 1) / 2;
	for (x = final; str[x]; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
