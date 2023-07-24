#include <unistd.h>

/**
 * _putchar - prints character
 * @c: character to print
 *
 * Return: Always 1 (success), else -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
