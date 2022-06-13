#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for 101-crackme
 * Return: 0 on success
 */
int main(void)
{
	int password, x;

	srand(time(NULL));
	x = 0;
	while (x <= 2645)
	{
		password = (rand() % 128);
		x += password;
		printf("%c", password);
	}
	printf("%c", 2772 - x);
	return (0);
}


