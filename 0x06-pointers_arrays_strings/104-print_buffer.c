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
	int a, count;

	for (a = 0; a < size; a += 10)
	{
		printf("%08x: ", a);

		for (count = 0; count < 10; count++)
		{
			if ((count + a) >= size)
				printf(" ");
			else
				printf("%02x", *(b + count + a));
			if ((count % 2) != 0 && count != 0)
				printf(" ");
		}
		for (count = 0; count < 10; count++)
		{
			if ((count + a) >= size)
				break;
			else if (*(b + count + a) >= 31 &&
					*(b + count + a) <= 126)
				printf("%c", *(b + count + a));
			else
				printf(".");
		}
		if (a >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
