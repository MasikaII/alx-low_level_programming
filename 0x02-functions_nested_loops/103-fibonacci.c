#include <stdio.h>
/**
 * main - prints sum of even-valued numbers in a
 * fibonacci sequence not exeeding 4,000,000
 * Return: 0 on success
*/
int main(void)
{
	int x;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c = 3;
	unsigned long d = 2;

	for (x = 0; c < 4000000; x++)
	{
		c = a + b;
		if (c % 2 == 0)
			d += c;
		a = b;
		b = c;
	}
	printf("%ld\n", d);
	return (0);
}
