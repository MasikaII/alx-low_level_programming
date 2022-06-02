#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point to the program
 * Description: Outputting to the standard error
 * Return: 1 if successful
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2010-10-19\n\n", 58);
	return (1);
}

