#include "main.h"
/**
 * print_square- prints #
 * @size: parameter to collect args
 * Return: Always 0.
*/
void print_square(int size)
{
int a = 0;
while (a < size)
{
int b = 0;
while (b > a)
{
if (size == 0 || size < 0)
{
_putchar('\n');
break;
}
_putchar('#');
b++;
}
_putchar('\n');
a++;
}    
}