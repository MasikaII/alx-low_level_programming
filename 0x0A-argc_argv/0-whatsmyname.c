#include <stdio.h>
#include "main.h"
/**
 * main - prints name of the program followed by a new line
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
