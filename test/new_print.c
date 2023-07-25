#include "main.h"

int new_printf(const char *format, ...)
{
	int len = 0;
	char *buffer;
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
					char c = (char)va_args(args, int);

					_putchar(c);
					len = len + 1;
					break;
				case 's':
					buffer = va_arg(args, char *);
					while (*buffer)
					{
						_putchar(*buffer);
						buffer;
						count++;
					}
					break;
				case '%':
					_putchar('%');
					len = len + 1;
					break;
				default:
					_putchar('%');
					_putchar(ch);
					len = len + 2;
			}
		}
		format++
	}
	va_end(args);
	return (len);
}
