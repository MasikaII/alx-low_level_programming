#include <stdio.h>
/**
 * main - Program's entry point
 * Description: Combinations
 * Return: 0 on success
*/
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++x;
	}
	putchar('\n');
	return (0);
}

