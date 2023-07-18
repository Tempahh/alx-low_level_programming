#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: int type number
 */
void print_to_98(int n)
{
for (n; n <= 98; n++)
_putchar(n + 48);
_putchar(',');
_putchar(' ');
}
