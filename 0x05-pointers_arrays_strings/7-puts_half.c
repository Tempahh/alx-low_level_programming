#include "main.h"
/**
 * puts_half - prints the last half
 * @str: collects arguments
 * Return: Always 0.
*/
void puts_half(char *str)
{
int a = _strlen(str), b;
if (a % 2 == 0)
{
b = a / 2;
}
else
{ 
b = (a - 1) / 2;
}
while (str[b] != '\0')
{
_putchar(str[b]);
b++;
}
}
