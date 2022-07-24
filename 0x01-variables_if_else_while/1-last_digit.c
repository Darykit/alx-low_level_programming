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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d last digit of\n", n);

	if (n > 5)
	{
		printf("%d is greater than 5\n", n);
	}
	else if (n < 6)
	{
		printf("%d is less than 6 and not 0\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
