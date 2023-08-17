#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int a;
	char *str;

	va_start(arg_list, n);
	for (a = 0; a < n; a++)
	{
		str = va_arg(arg_list, char *);

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	va_end(arg_list);
	}
	printf("\n");
}
