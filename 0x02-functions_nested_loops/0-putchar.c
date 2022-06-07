#include <stdio.h>
#include "main.h"
/**
 * main - Entry point to program
 * Description: Outputting _putchar followed by a new line
 * Return: 0 on success
*/
int main(void)
{
	int x = 0;
	char a[] = "_putchar";

	while (x < 8)
	{
		_putchar(a[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
