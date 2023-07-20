#include "main.h"
/**
 * print_numbers - print numbers between 0 & 9
 * Description - prints numbers from 0 - 9
 * Return - Always 0.
*/
void print_numbers(void)
{
char a;
for(a = 0; a < 10; a++)
{
_putchar (a + '0');
}
_putchar('\n');
}
