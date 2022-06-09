#include "main.h"
/**
 * print_diagonal - prints the character \
 * @n: number of times \ is printed
 * @n: integer value
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 0;
		while (x < n)
		{
			y = 0;
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			_putchar(92);
			x++;
			_putchar('\n');
		}
	}
}
