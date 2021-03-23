#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - TEST PARA EL PUNTO CERO, PARA IMPRIMIR CHAR, STRING Y PORCENTAJE
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

/* len y len dos corresponden al largo de la string impresa*/
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
/*imprimir character*/
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
/*imprimir string*/
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n \n", "I am a string !");

	printf("Para testear el backslash: \n");

	_printf("0Ho\\la\\hola\nhola\"hola\'\n");
	printf("1Ho\\la\\hola\nhola\"hola\'\n");
	return (0);
}
