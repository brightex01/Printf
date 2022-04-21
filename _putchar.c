#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: character to print to stdout
 * Return: 1 on SUCCESS & -1 on error and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
