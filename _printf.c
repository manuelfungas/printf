#include "main.h"
#include <stdio.h>

/**
 * print_char - print character
 *
 * @c: char to print
 *
 * Return: nothing
 */
int print_char(char c)
{
	_putchar(c);
	return (1);
}

/**
 * print_dec - prints decimal
 *
 * @num: number to print
 * Return: 0
 */
int print_dec(int num)
{
	int i, index, count = 0;
	char buffer[12];

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
	}

	index = 0;
	while (num > 0)
	{
		buffer[index] = '0' + (num % 10);
		num = num / 10;
		index++;
	}
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	count++;
	return (count);
}

/**
 * print_int - prints intergers
 * @n: integer to print
 * @base: base to use for printing
 *
 * Return: 0
 */
int print_int(int n, int base)
{
	char *digits = "0123456789ABCDEF";
	char buffer[33];
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n != 0)
	{
		buffer[i++] = digits[n % base];
		n /= base;
	}
	while (i > 0)
	{
		_putchar(buffer[--i]);
	}
	return (i);
}

/**
 * print_str - prints string
 * @s: pointer to string
 *
 * Return: returns string value
 */
int print_str(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		print_str("(null)");
		return (6);
	}

	while (*s)
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}

/**
 *_printf - prints anything.
 *@format: the format string.
 *
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int len = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			print_char(*format);
			len +=  1;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					len += print_char((char)va_arg(args, int));
					break;
				case 's':
					len += print_str(va_arg(args, char *));
					break;
				case '%':
					len += print_char('%');
					break;
				case 'i':
				case 'd':
					len += print_int(va_arg(args, int), 10);
					break;
				default:
					print_char('%');
					print_char(*format);
					len += 2;
			}
		}
		format++;
	}
	va_end(args);
	return (len);
}
