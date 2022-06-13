#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: pointer to array
 * @n: number of elements in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");

		x++;
	}
	printf("\n");
}
