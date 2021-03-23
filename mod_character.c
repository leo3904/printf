#include "holberton.h"
/**
 * mod_character_s - choose a function to execute in case of match with thelist
 * @next: pointer to the character after the percentage
 * Return: if it makes a match, execute the function and return the value
 * returned by the function. If there isn't a match return null.
 **/
int (*mod_character_s(const char *next))(va_list)
{
	int i;
	spc_t options[] = {
		{"s", print_string},
		{"c", print_char},
		{NULL, NULL}
	};

	for (i = 0; options[i] .match; i++)
/*itera buscando match mientras no sea null*/
		if (*options[i].match == *next)
/*compara match y next (s, c, d, etc)*/
			return (options[i].function);
/*ejecute la funcion donde hubo match y devuelva su retorno*/
	return (NULL);
/*si no hizo match con ninguna funcion, retorne NULL*/
}
