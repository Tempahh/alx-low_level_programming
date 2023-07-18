#include "main.h"
/**
 * print_sign - prints signs depending on number
 * @n - Parameter to collect arguments
 * Return: Always 0.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
else if (n < 0)
{
_putchar('-');
}
else
{
_putchar('0');
}
}
