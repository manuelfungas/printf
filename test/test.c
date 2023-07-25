#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;

	int i;
	char *buff;

	va_start (args, format);

	while (*format)
	{
		for (i = 0; i < format[i]; i++)
		{
			if (format[i] == '%')
			{
				buff = malloc(sizeof(char) * 2);

				switch (format[i])
				{
					case 'c':
						buff = va_arg(args, int);
						buff = '\0';
						break;
					defualt:
							char c = '%';
							_putchar(c);
							continue;
				}
			}
			i++;
			buff = format[i];
		}
	}
	_putchar('\n');
	va_end(buff);
}
