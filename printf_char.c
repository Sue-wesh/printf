#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int len = 0;

	while (*format != '\0')
	{
		len++;
		format++;
	}
	return (len);
}

/**
 * main - find length of a string
 *
 * Return: 0 at the end
 */
int main(void)
{
	char *format = "Hello Dan";
	int len = 0;

	len = _printf(format);
	printf("%d\n", len);
	printf("%s\n", format);
	printf("%%\n");
	putchar('\n');
	return (0);
}
