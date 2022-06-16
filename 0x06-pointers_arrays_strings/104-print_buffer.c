#include <stdio.h>
#include "main.h"
/**
 * ascii - determines if n is an ASCII character
 * @n: input
 * Return: 1 if ASCII 0 otherwise
 */
int ascii(int n)
{
	return (n >= 32 && n <= 126);
}
/**
 * hexadecimal - prints hexadecimal value of a string
 * @string: string to be printed
 * @a: start position
 * @z: end position
 * Return: void
 */
void hexadecimal(char *string, int a, int z)
{
	int x = 0;

	while (x < 10)
	{
		if (x < z)
			printf("%02x", *(string + a + x));
		else
			printf("  ");
		if (x % 2)
			printf(" ");
		x++;
	}
}
/**
 * ascii_print - prints ascii values for string string
 * @string: input string
 * @a: start position
 * @z: end position
 * Return: void
 */
void ascii_print(char *string, int a, int z)
{
	int x, y;

	y = 0;
	while (y < z)
	{
		x = *(string + y + a);
		if (!ascii(x))
			x = 46;
		printf("%c", x);
		y++;
	}
}
/**
 * print_buffer - prints a buffer
 * @b: input string
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int a, z;

	if (size > 0)
	{
		for (a = 0; a < size; a += 10)
		{
			z = (size - a < 10) ? size - a : 10;
			printf("%08x: ", a);
			hexadecimal(b, a, z);
			ascii_print(b, a, z);
			printf("\n");
		}
	}
	else
		printf("\n");
}
