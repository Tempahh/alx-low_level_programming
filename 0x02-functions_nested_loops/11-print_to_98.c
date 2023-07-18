#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: int type number
 */
void print_to_98(int n)
{
if (n >= 98)
{
printf("%d, ", n);
n--;
}
else
{
printf("%d", n);
n++;
}
}