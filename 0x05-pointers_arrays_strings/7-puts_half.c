#include "main.h"
#include <string.h>
/**
 * puts_half - prints the last half
 * @str: collects arguments
 * Return: Always 0.
*/
void puts_half(char *str)
{
int a = strlen(str), b;
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
_putchar('\n');
}
