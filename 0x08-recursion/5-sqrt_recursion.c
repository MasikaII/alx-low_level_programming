#include "main.h"
/**
 * square_root - computes natural square root of a number
 * @a: input number
 * @b: iterator
 * Return: square root otherwise -1
 */
int square_root(int a, int b)
{
	if ((b * b) == a)
		return (b);
	if (b == a / 2)
		return (-1);
	return (square_root(a, b + 1));
}
/**
 * _sqrt_recursion - computes natural square root of a number
 * @n: input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (square_root(n, 0));
}
