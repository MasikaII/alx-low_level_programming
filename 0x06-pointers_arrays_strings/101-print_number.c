#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int x, y, index;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}
	y = x;
	index = 1;
	while (y > 9)
	{
		y /= 10;
		index *= 10;
	}
	for (; index >= 1; index /= 10)
	{
		_putchar(((x / index) % 10) + 48);
	}
}
