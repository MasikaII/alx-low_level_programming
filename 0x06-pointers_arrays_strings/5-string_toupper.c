#include "main.h"
/**
 * string_toupper - converts lowercase letters to uppercase
 * @a: pointer to string
 * Return:pointer to converted string
 */
char *string_toupper(char *a)
{
	int span;

	span = 0;
	while (a[span] != '\0')
	{
		if (a[span] >= 97 && a[span] <= 122)
			a[span] = a[span] - 32;
		span++;
	}
	return (a);
}
