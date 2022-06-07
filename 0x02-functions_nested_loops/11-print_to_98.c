#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints natural numbers between n and 98
 * @n: first number
 * Return: void
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
