#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * Return: On Success 1.
 * on error, -1 os returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
