#include "main.h"
/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */
char *_strchr(char *s, char c)
{
char *p;
while (*s != '\0')
{
if (*s == c)
p = *s;
else
return (NULL);
}
return (p);
}
