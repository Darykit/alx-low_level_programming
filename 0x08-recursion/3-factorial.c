#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number.
 * @n: int
 *
 * Return: factorial of a number or -1
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
