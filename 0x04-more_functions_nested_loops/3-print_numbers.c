#include "main.h"
/**
 * print_numbers - prints digits 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		_putchar('0' + x);
		x++;
	}
	_putchar('\n');
}
