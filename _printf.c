#include "main.h"

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
 * print_int - prints integers
 *
 * @num: number to print
 * Return: 0
 */

int print_int(int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	if (num / 10)
	{
		count += print_int(num / 10);
	}
	_putchar(num % 10 + '0');
	count++;
	return (count);
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
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			print_char(*format);
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					print_char((char)va_arg(args, int));
					break;
				case 's':
					print_str(va_arg(args, char *));
					break;
				case '%':
					print_char('%');
					break;
				case 'i':
				case 'd':
					print_int(va_arg(args, int));
					break;
				default:
					print_char('%');
					print_char(*format);
			}
		}
		format++;
	}
	va_end(args);
	return (len);
}
