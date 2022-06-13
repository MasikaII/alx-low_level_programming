#include "main.h"
/**
 * _puts - prints a string followed by a newline
 * @str: pointer to string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int x;

	x = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		x++;
		str++;
	}
	_putchar('\n');
}
