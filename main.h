#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct print - structure to print different types
 * @t: type identifier
 * @f: pointer to function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);

#endif
