#include <stdio.h>
#include "main.h"
/**
*_puts_recursion - function to print string
*@s: pointer reading the argument passed to the function
*Return: return the string
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
	_putchar('\n');
return;
_putchar(*s);
_puts_recursion(++s);
}
