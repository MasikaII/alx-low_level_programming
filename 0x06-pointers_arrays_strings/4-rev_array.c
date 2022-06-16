#include "main.h"
/**
 * reverse_array - reverses contents of an array of integers
 * @a: pointer to the array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m, x;

	for (x = n - 1; x >= n / 2; x--)
	{
		m = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = m;
	}
}
