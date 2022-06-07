#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: void
*/
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			z = x * y;
			_putchar(44);
			_putchar(32);
			if (z <= 9)
			{
				_putchar(32);
				_putchar(c + 48);
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
		}
		_putchar('\n');
	}
}

