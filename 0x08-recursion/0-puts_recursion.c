#include <stdio.h>
/**
*_puts_recursion - function to print string
*@s: pointer reading the argument passed to the function
*Return: return the string
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
	printf('\n');
return;
printf('*s');
_puts_recursion(s++);
}

