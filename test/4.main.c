#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - IMPRIMIR OCTAL SIN SIGNO, ENTERO SIN SIGNO, HEX MAY Y MIN
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

/* len y len dos corresponden al largo de la string impresa*/
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

/*imprimir enteros con %d y %i
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
/*imprimir numeros negativos
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
/*imprimir unsigned*/
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
/*imprimir octal*/
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
/*imprimir hexadecimal*/
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
/*imprimir character
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
/*imprimir string
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
/*imprimir puntero
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
/*imprimir porcentaje
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
/*imprimir entero ¿¿¿otra vez???
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
/*imprimir string en reversa?no entiendo??
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");*/
	return (0);
}
