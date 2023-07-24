#include "main.h"
/**
 * rev_string - reverses strings
 * @s: collects arguments
 * Return: Always 0.
*/
void rev_string(char *s)
{
int b = 0;
while (*s != '\0')
{
s++;
b++;
}
while (b > 0)
{
s--;
_putchar(*s);
b--;
}
}
