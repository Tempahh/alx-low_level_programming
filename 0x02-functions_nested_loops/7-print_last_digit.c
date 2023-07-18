#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: parameter used to collect number
 * Return - always o.
*/
int print_last_digit(int a)
{
int b;
if ( a < 0)
{
b = -1 * (b % 10);
_putchar(a + '0');
}
else
{
b = a % 10;
_putchar (b + '0');
return (b);
}
return (0);
}
