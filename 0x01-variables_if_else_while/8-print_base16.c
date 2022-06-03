#include <stdio.h>
/**
 * main - Program's entry point
 * Description: Printing all base 16 numbers
 * Return: 0 on success
*/
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	x = 'a';
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
