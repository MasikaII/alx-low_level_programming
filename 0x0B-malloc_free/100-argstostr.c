#include <stdlib.h>
#include "main.h"
/**
 * *argstostr - concatenates multiple arguments
 * @ac: arguments count
 * @av: pointer to array av
 * Return: pointer to a new string, or NULL if
 * ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, length = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			length++;
	}
	length += ac;

	string = malloc(sizeof(char) * length + 1);
	if (string == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			string[c] = av[a][b];
			c++;
		}
		if (string[c] == '\0')
		{
			string[c++] = '\n';
		}
	}
	return (string);
}
