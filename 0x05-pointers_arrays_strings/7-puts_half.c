#include "main.h"
#include <string.h>
/**
 * puts_half - prints the last half
 * @str: collects arguments
 * Return: Always 0.
*/
void puts_half(char *str)
{
int a = strlen(str), b = 0, c = 0;
if (a % 2 == 0)
{
b = a / 2;
while (str[b] != '\0')
{
_putchar(str[b]);
b++;
}
}
else if (a % 2 != 0)
{
c = (a - 1) / 2;
while (str[c] < c - 1)
{
_putchar(str[c + 1]);
c++;
}
}
_putchar('\n');
}
