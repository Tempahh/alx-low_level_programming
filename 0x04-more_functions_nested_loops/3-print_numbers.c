#include "main.h"
/**
 * print_numbers - print numbers between 0 & 9
 * Description - prints numbers from 0 - 9
 * Return - Always 0.
*/
void print_numbers(void)
{
int a = 0;
while (a < 10)
_putchar (a + '0');
a++;
_putchar('\n');
return (0);
}
