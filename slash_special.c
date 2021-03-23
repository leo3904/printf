#include "holberton.h"
/**
 * slash_character_s - toma como string literal lo que hay despues
 * de backslash
 * @next: es el puntero al caracter que va después del backslash
 * en la string original
 * Return: el char en ascii
 **/

char slash_character_s(const char *next)
{
	if (*next == '\\')
		return (92); /* es el backslash en asci*/
	if (*next == '%')
		return (37);
	if (*next == '\'')
		return (39);
	if (*next == '"')
		return (34);
	if (*next == 'n')
		return (10);
	return (*next);
}
