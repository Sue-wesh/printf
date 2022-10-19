#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - produce output according to format
 * @format: character string
 *
 * Return: len at the end
 */
int _printf(const char *format, ...)
{
	va_list list;
	int len = 0, i = 0;

	va_start(list, format);

	while (*format != '\0')
	{
		if (format[i] != '%')
		{
			len += putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
				{
					len += putchar(va_arg(list, int));
					break;
				}
				case 's':
				{
					len += va_arg(list, int);
					break;
				}
				default:
					break;
			}
			i += 2;
		}
	}
	va_end(list);
	return (len);
}
/**
 * main - calls function _printf
 *
 * Return : 0 at the end
 */
int main(void)
{
	char *format = "Hello Dan";
	int len = _printf(format);

	printf("%d", len);
	return (0);
}
