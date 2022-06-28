#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to char
 *
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	array = malloc(sizeof(char) * (i + 1));

	if (array == NULL)
		return (NULL);

	while (str[j])
	{
		array[j] = str[j];
		j++;
	}
	array[j + 1] = 0;
	return (array);
}
