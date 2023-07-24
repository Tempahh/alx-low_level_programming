#include "main.h"
/**
 * _puts - prints strings in reverse
 * @str: parameter to collect argument
 * Return: Always 0.
*/
void _puts(char *str)
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
