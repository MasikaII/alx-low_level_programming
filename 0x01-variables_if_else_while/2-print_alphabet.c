#include <stdio.h>
/**
 * main - Entry point to the program
 * Description: Alphabet in lowercase
 * Return: Always 0(Success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
