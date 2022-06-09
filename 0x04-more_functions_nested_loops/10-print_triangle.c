#include "main.h"
/**
 * print_triangle - prints triangles using the number sign
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, z;

	for (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (z = 1; z <= (size - x); z++)
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
