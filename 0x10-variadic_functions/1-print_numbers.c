#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print each number with separator, followed by a newline
 * @seperator: string to be printed between numbers
 * @n: number of args passed
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list arg_list;
	int a;

	va_start(arg_list, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(arg_list, int));

		if (seperator && a < n - 1)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(arg_list);
}
