#include "main.h"
/**
 * print_numbers - prints digits 0 to 9
 * Return: numbers
 */
void print_numbers(void)
{
	char x = '0';

	while (x <= '9')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	return (x);
}
