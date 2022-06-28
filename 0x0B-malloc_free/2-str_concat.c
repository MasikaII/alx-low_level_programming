#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space in
 * memory containing the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2;
	char *ptr, *ret;

	size1 = 0;
	size2 = 0;
	ptr = s1;
	if (s1)
		while (*ptr++)
			size1++;
	else
		s1 = "";
	ptr = s2;
	if (s2)
		while (*ptr++)
			size2++;
	else
		s2 = "";
	ret = malloc(size1 + size2 + 1);
	if (!ret)
		return (NULL);
	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;
	return (ret);
}
