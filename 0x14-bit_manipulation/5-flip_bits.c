#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	int count = 0;

	if (!n || !m)
		return (0);
	{
		if (xor & 1)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
