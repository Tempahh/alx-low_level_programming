#include "main.h"
/**
 * print_diagonal - prints diagonal lines
 * @n: parameter to collect argument
 * Return: Always 0.
*/
void print_diagonal(int n)
{
int a = 0;
while (a < n)
{
int b = 0;
while (b < a)
{
_putchar(' ');
b++;
}
_putchar('\\');
_putchar('\n');
a++;
}
}
