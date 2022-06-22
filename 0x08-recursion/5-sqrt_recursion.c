#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 * @helper: function
 * @guess: parameter
 * Return: natural square root or -1
 */
int helper(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	else
	{
		guess++;
		return (helper(n, guess));
	}
}

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (helper(n, 1));
}

