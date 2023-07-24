#include "main.h"
/**
 * print_rev - prints strings in reverse
 * @str: parameter to collect argument
 * Return: Always 0.
*/
void print_rev(char *str)
{
int b = 0;
while (*str != '\0')
{
str++;
b++;
}
while (b > 0)
{
str--;
_putchar(*str);
b--;
}
_putchar('\n');
}
