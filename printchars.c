#include "main.h"

/**
 * print_c - prints a character
 * @c: character to print
 *
 * Return: 1
 */

int print_c(va_list c)
{
	char a = (char)va_arg(c, int);

	_putchar(a);
	return (1);
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: number of characters printed
 */
int print_s(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
