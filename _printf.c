#include "main.h"
/**
 * print_char - print character
 *
 * @c: char to print
 *
 * Return: nothing
 */
int print_char(int c)
{
	return (write(1, &c, 1));
}

/**
 * print_digit- prints integers
 *
 * @n: number to print
 * @base: base of the numebr
 * Return: 0
 */
int print_digit(long n, int base)
{
	int count;
	char *symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base) + 1);
	}
	else if (n < base)
	{
		return (print_char(symbols[n]));
	}
	else
	{
		count = print_digit(n / base, base);
		return (count + print_digit(n % base, base));
	}
}

/**
 * print_str - prints string
 * @s: pointer to string
 *
 * Return: returns string value
 */
int print_str(char *s)
{
	int count;

	count = 0;
	if (s == NULL)
	{
		count += write(STDOUT_FILENO, "(null)", 6);
		return (count);
	}
	while (*s)
	{
		count += write(1, s++, 1);
	}
	return (count);
}

/**
 * print_format - verifies specifiers
 * @specifier: specifier
 * @args: arguments
 * Return: Counter
 */
int print_format(char specifier, va_list args)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count = print_char(va_arg(args, int));
	else if (specifier == 's')
		count = print_str(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		count = print_digit((long)va_arg(args, int), 10);
	else if (specifier == 'x')
		count = print_digit((long)va_arg(args, unsigned int), 16);
	else
		count += write(1, &specifier, 1);
	return (count);
}

/**
 *_printf - prints anything.
 *@format: the format string.
 *
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list	args;
	int count;

	va_start(args, format);
	count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				count += write(STDOUT_FILENO, "%", 1);
				break;
			}
			else if (*format == '%')
			{
				count += write(STDOUT_FILENO, format, 1);
			}
			else
			{
				count += print_format(*format, args);
			}
		}
		else
			count += write(STDOUT_FILENO, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
