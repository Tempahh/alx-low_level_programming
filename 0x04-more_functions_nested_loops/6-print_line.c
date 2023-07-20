#include "main.h"
/**
 * print_line - prints lines
 * @n: parameter for collecting arguments
 * Description:  draws a straight line in the terminal
 * Return: Always 0.
*/
void print_line(int n)
{
int a = 0;
while (a < n)
{
_putchar ('_');
a++;
}
_putchar ('\n');
}
