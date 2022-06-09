#include "main.h"
/**
 * print_triangle - prints triangles using the number sign
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, space;

	for (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (space = 1; space <= (size - x); space++)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
