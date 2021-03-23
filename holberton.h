#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h> /*for varyadic functions*/
#include <stdlib.h> /*for malloc and NULL*/
#include <unistd.h> /*for write*/
#include <limits.h> /* for test cases*/

/**
 * struct special_cases - struct for special cases
 * @match: the character to match
 * @function: the function
 */
typedef struct special_cases
{
	constchar *match;
	int (*function)(va_list);
} spc_t;
/*name of the struct*/

char slash_character_s(const char *next);
int (*mod_character_s(const char *next))(va_list);
int _printf(const char *format, ...);

/*functions for print*/
int print_char(va_list);
int print_string(va_list);
int print_mod(va_list);
int _putchar(char c);

#endif /* HOLBERTON_H */
