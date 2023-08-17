#include<stdio.h>
#include<stdarg.h>
#include<stdio.h>

/**
 * sum_them_all - a function ...
 * @n: the chaine
 * @...: the char
 *
 * Return: 1 or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int a, sum = 0;

	if (n == 0)
		return (0);

	va_start(arg_list, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(arg_list, int);
	}
	va_end(arg_list);
	return (sum);
}
