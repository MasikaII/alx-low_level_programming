#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints a buffer
 * @b: buffer being printed
 * @size: number of bytes being printed from the buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int x, y;

	x = 0;
	if (size < 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		if (x % 10 == 0)
			printf("%08x: ", x);
		for (y = x; y < x + 9; y += 2)
		{
			if ((y < size) && ((y + 1) < size))
				printf("%02x%02x: ", b[y], b[y + 1]);
			else
			{
				while (++y <= x + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (y = x; y < x + 9 && y < size; y++)
		{
			if (b[y] >= 32 && b[y] <= 126)
				printf("%c", b[y]);
			else
				printf(".");
		}
		printf('\n');
		x += 10;
	}
}

