#include "holberton.h"
/**
 *print_string - prints a string
 *@s: arguments from _printf
 *Return: length
 **/
int print_string(va_list s)
{
	char *string;
	int i, length = 0;
	char buffer[1024];

	string = va_arg(s, char *);

	for (i = 0; string[i]; i++)
	{
		buffer[i] = string[i];
		length++;
	}
	write(1, &buffer, length);
	return (length);
}
/**
 *print_char - prints a char
 *@c: arguments from _printf
 *Return: length
 **/
int print_char(va_list c)
{
	int character;

	character = va_arg(c, int);
	write(1, &character, 1);
	return (1);
}
