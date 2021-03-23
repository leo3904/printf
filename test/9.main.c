#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char string[7]= "holaa2";
	char c = 'o';

	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");

	_printf("OUR: hola %s\n", "holaa2");
	printf("OTH: hola %s\n", "holaa2");

	_printf("OUR: hola %s\n", string);
	printf("OTH: hola %s\n", string);

	_printf("OUR: hola %c\n", 'c');
	printf("OTH: hola %c\n", 'c');

	_printf("OUR: hola %c\n", c);
	printf("OTH: hola %c\n", c);

	printf("OTH: hola %%\n");
	_printf("OUR: hola %%\n");
	printf("OTH: hola %%\n");

	return (0);
}
