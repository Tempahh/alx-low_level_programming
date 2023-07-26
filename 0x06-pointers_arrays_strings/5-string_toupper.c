#include "main.h"
#include "stdio.h"
/**
 * string_toupper - lower to upper
 * @s: pointer to char params
 *
 * Return: *s
 */
char *string_toupper(char *s)
{
char *temp;
for (int i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = (s[i] - 'a' + 'A');
}
}
return (s);
}
