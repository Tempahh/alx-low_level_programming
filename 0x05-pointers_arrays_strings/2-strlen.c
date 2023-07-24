#include "main.h"
/**
 * _strlen - calculates string length
 * @s: a parameter to collect argument
 * Return: Alway 0.
*/
int _strlen(char *s)
{
int b = 0;
while (s[b] != '\0')
{
b++;
}
return (b);
}
