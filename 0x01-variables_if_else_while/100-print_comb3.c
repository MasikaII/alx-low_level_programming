#include <stdio.h>
/**
 * main - Entry point to program
 * Description: All possible combinations of two digits
 * Return: 0 on success
*/
int main(void)
{
	int a = '0';
	int b = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (a > b || a == b)
			{
			}
			else
			{
				putchar(a);
				putchar(b);
				if (b == '9' && a == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			++b;
		}
		if (b >= '9')
		{
			b = '0';
		}
		++a;
	}
	return (0);
}
