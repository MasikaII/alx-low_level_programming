#include <stdio.h>
/**
 * main - Program's entry point
 * Description: Printing alphabet without q and e
 * Return: Always 0(Success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e')
			if (letter != 'q')
				putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
