#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("last digit of");

	if (last_digit > 5)
	{
		printf("%d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("%d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	else
	{
		printf("%d is %d and is zero\n", n, last_digit);
	}
	return (0);
}
