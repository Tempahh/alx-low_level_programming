#include "main.h"
/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */
char *_strchr(char *s, char c)
{
for (int i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return ((s + 1));
}
return (NULL);
}
