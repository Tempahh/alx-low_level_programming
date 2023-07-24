#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: parameter to collects argument
 * Return: Always 0.
*/
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str = str + 2;
}
_putchar('\n');
}
