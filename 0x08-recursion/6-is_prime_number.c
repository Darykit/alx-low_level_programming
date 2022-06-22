#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: int
 * Return: 1 or 0
 */
int check_prime(int i, int num)
{
	if (i ==num)
	{
		return (1);
	}
	else  if (num % i == 0)
	{
		return (0);
	}
	else if (num > i)
	{
		return (check_prime(i + 1, num));
	}
	return (1);
}

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(2, n));
}

