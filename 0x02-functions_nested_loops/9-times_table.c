#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
int a, b, d;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (b = 1; b <= 9; b++)
	{
		d = (a * b);
	if ((d / 10) > 0)
	{
		_putchar((d / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
		_putchar((d % 10) + '0');

	if (b < 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
		_putchar('\n');
	}

}
