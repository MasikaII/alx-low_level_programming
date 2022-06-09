#include "main.h"
/**
 * print_line - outputs the character _ n times consecutively to form lines
 * @n: number of times _ is output
 * Return: void
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 1;
		while (x <= n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
