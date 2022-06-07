#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
*/
void print_alphabet_x10(void)
{
	char a = 'a';
	int x = 0;

	while (x <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		x++;
	}
}
