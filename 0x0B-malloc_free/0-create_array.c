#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of characters
 * @size: array size
 * @c: character used to initialize array
 * Return: pointer to array, otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	/*Checking if malloc was successful*/
	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}

	return (array);
}
