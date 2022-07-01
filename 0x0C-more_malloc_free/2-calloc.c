#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ar[i] = 0;

	return (ar);
}
