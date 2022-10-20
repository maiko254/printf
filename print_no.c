#include "main.h"

/**
 * print_d - prints decimal
 * @d: decimal to print
 *
 * Return: number of characters and digits printed
 */
int print_d(va_list d)
{
	int a[10];
	int i, j, k, sum, count;

	k = va_arg(d, int);
	count = 0;
	j = 1000000000;
	a[0] = k / j;
	for (i = 1; i < 10; i++)
	{
		j /= 10;
		a[i] = (k / j) % 10;
	}
	if (k < 0)
	{
		_putchar('-');
		count++;
		for (i = 0; i < 10; i++)
			a[i] *= -1;
	}
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum != 0 || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}

	return (count);
}

/**
 * print_i - prints an integer
 * @i: integer to print
 *
 * Return: number of characters and digits printed
 */
int print_i(va_list i)
{
	int a[10];
	int n, j, k, sum, count;

	k = va_arg(i, int);
	count = 0;
	j = 1000000000;
	a[0] = k / j;
	for (n = 1; n < 10; n++)
	{
		j /= 10;
		a[n] = (k / j) % 10;
	}
	if (k < 0)
	{
		_putchar('-');
		count++;
		for (n = 0; n < 10; n++)
			a[n] *= -1;
	}
	for (n = 0, sum = 0; n < 10; n++)
	{
		sum += a[n];
		if (sum != 0 || n == 9)
		{
			_putchar('0' + a[n]);
			count++;
		}
	}

	return (count);
}
