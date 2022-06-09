#include "main.h"
/**
 * more_numbers - prints 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int x, y;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 15)
		{
			if (y >= 10)
				_putchar('0' + y / 10);
			_putchar('0' + y % 10);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
