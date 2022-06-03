#include <stdio.h>
/**
 * main - Program's entry point
 * Description: Printing base 10 numbers using putchar
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
	putchar('\n');

	return (0);
}
