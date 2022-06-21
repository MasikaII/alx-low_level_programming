#include "main.h"
/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to pointer being set
 * @to: string being set
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
