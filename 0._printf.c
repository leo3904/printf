#include "holberton.h"
/**
 * _printf - Imprime strings, caracteres, etc.
 * @format: string a imprimir
 * Return: cantidad de caracteres impresos
 */
int _printf(const char *format, ...)
{
	va_list llamada;
	int i, s; /*counters*/
	int lenght;
	const char *next;
	char buffer[1024];
	char *string;
	char character;

/* cuadrar el main - tiempo estimado 2 horas. Meta: 5pm*/
/* probar el main*/
/* cuadrar la estructura - tiempo estimado 30 min. Meta: 6pm */
/* Cuadrar los prototipos y dividirnos las funciones específicas.
 * Tiempo estimado: 1 hora meta 7pm*/
/* test especificos de las funciones y las desarrollamos*/
/* quien que va a hacer que: {funciones, man page} tiempo 30 min Meta: 9pm*/
	va_start(llamada, format);
	for (i = 0; format[i]; i++)
	{

		if (format[i] == '\\') /* backslash*/
		{
			next = &format[i] + 1;
			buffer[i] = slash_character_s(next);
			lenght++;
			buffer[i] = format[i];
		}
		if (format[i] == '%')
		{

			next = &format[i] + 1;
			if (next == s)
			{
				string = va_arg(format, *char);
				for(s = 0; *string[s]; s++)
				{
					buffer[??] = string[s];
				}
			}

			if (next == c)
			{
				character = va_arg(format, char);
			}


		}

		lenght++;
	}
	write(1, &buffer, i);
	va_end(llamada);
	return (0);
}
