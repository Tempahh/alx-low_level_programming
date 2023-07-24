#include "main.h"
/**
 * puts_half - prints the last half
 * @str: collects arguments
 * Return: Always 0.
*/
void puts_half(char *str)
{
int a = _strlen(str), b = a / 2, c =  (a - 1)/ 2;
if (b % 2 == 0)
{
while (str[b] != '\0')
{
_putchar(str[b]);
b++;
}
}
else
{
while (str[c] != 0)
{
_putchar(str[c]);
c++;
}
}
}
