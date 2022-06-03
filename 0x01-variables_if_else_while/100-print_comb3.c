#include <stdio.h>
/**
 * main - Entry point to program
 * Description: All possible combinations of two digits
 * Return: 0 on success
*/
int main(void)
{
	int a = 48;
	int b = 48;

	while (b < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (b != a && b < a)
			{
				putchar(b);
				putchar(a);
				if (a == 57 && b == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
