#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space
 * in memory containing a duplicate of a string
 * @str: pointer to duplicated string
 * Return: pointer to duplicated string, or NULL if
 * str is null or memory is insufficient
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int length;
	unsigned int x;

	/*checking if str is null*/
	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	string = malloc(sizeof(char) * (length + 1));

	/*checking if malloc was successful*/
	if (string == NULL)
		return (NULL);

	for (x = 0; x < length; x++)
	{
		string[x] = str[x];
	}
	string[length] = '\0';
	return (string);
}
