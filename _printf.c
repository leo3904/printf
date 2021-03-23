#include "holberton.h"
/**
 * _printf - Prints strings
 * @format: string to print
 * Return: amount of characters printed
 */
int _printf(const char *format, ...)
{
	va_list llamada, int i, const char *next, int length = 0;

	va_start(llamada, format); /*char buffer[1024];*/
	for (i = 0; format[i]; i++) /* recorrer string */
	{
		if (format[i] == '\\') /* backslash*/
		{
			if (format[i] + 1)
			{
				next = &format[i] + 1;
				_putchar(slash_character_s(next));
			}
		}
		if (format[i] == '%')
		{
			if (format[i] + 1) /* && sizeof(format[i]) == char */
			{
				next = &format[i] + 1;
				if (*next == '%')
					_putchar('%');
				else
					length += mod_character_s(next)(llamada);
				i = i + 2;
			}
		}
		length++;/*buffer[i] = format[i]; */
		_putchar(format[i]);
	}
	va_end(llamada);
	return (length);
}
