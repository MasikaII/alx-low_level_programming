#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point to the program
 * Description: Using if...else statement
 * Return: Always 0(Success)
*/
int main(void)
{
	char a[] = "Last digit of";
	char b[] = "and is greater than 5";
	char c[] = "and is 0";
	char d[] = "and is less than 6 and not 0";
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("%s %d is %d %s\n", a, n, n % 10, b);
	}
	else if (n % 10 == 0)
	{
		printf("%s %d is %d %s\n", a, n, n % 10, c);
	}
	else
	{
		printf("%s %d is %d %s\n", a, n, n % 10, d);
	}

	return (0);
}
