#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: ASCII code character
 * Return: 1 for positive, 0 for zero, otherwise -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
