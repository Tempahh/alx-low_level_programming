#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: parameter used to collect number
 * Return - always o.
*/
int print_last_digit(int a)
{
int b = a % 10;
return ("%d%d", b, b);
}
