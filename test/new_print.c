#include "main.h"


/**
 * print_int - prints integers
 *
 * @num: number to print
 * Return: 0
 */

void print_int(int num)
{
	int i, index;
	char buffer[12];

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		return;
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
}

/**
 * _str - prints string
 * @s: pointer to string
 *
 * Return: returns string value
 */
int _str(char *s)
{
	int i = 0;

	while (*s)
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}

/**
 *new_printf - prints anything.
 *@format: the format string.
 *
 *Return: the number of characters printed
 */
int new_printf(const char *format, ...)
{
	int len = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			len = len + 1;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
				{
					char c = (char)va_arg(args, int);

					_putchar(c);
					len = len + 1;
					break;
				}
				case 's':
				{
					char *buffer = va_arg(args, char *);

					len += _str(buffer);
					break;
				}
				case '%':
				{
					_putchar('%');
					len = len + 1;
					break;
				}
				case 'i':
				case 'd':
				{
					int n = va_arg(args, int);

					print_int(n);
					len = len + 1;
					break;
				}
				default:
					_putchar('%');
					_putchar(*format);
					len = len + 2;
			}
		}
		format++;
	}
	va_end(args);
	return (len);
}
