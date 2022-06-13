#include "main.h"
/**
 * *_strcpy - copies a string
 * @dest: destination pointer
 * @src: origin pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
