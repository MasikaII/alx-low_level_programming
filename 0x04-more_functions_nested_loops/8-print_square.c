#include "main.h"
/**
 * print_square - prints squares
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			_putchar('#');
			for (y = 1; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
