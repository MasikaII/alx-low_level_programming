#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 with the exception of 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		if (x != 2 && x != 4)
			_putchar('0' + x);
		x++;
	}
	_putchar('\n');
}

