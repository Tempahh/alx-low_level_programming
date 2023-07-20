#include "main.h"
/**
 * print_most_numbers - entry point
 * Description - prints numbers between 0 and 9 asides 2 and 4
 * Return - Always 0.
*/
void print_most_numbers(void)
{
char a;
for (a = 0; a < 10; a++)
{
if (a == 2 || a == 4)
break;
_putchar (a + '0');
}
_putchar('\n');
}
