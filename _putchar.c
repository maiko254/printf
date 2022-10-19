#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: char to write
 *
 * Return: 1 if successful, -1 on error and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
