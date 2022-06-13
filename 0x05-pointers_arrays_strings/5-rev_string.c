#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int a, b, d;
	char *begin_c, *conc_c, c;

	d = 0;
	for (a = 0; s[a]; a++)
	{
		d++;
	}
	b = d;
	begin_c = s;
	conc_c = s;

	for (a = 0; a < b - 1; a++)
	{
		c = *conc_c;
		*conc_c = *begin_c;
		*begin_c = c;
		begin_c++;
		conc_c--;
	}
}
