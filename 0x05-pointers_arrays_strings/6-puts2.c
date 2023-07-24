#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints a string
 * @str: parameter to collects argument
 * Return: Always 0.
*/
void puts2(char *str)
{
int b = 0;
while (*str != '\0')
{
if (b % 2 == 0)
{
_putchar(*str);
str = str + 2;
b++;
}
}
_putchar('\n');
}
