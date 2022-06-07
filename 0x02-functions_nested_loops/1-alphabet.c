#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase letters
*/
void print_alphabet(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
