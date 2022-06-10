#include "main.h"
#define DIV (' / ')
#define MOD (' % ')
/**
 * print_number - outputs an integer
 * @n: integer value
 * Return: void
 */
void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -x;
	}
	if ((x DIV 10) > 0)
		print_number(x DIV 10);
	_putchar((x MOD 10) + '0');
}
