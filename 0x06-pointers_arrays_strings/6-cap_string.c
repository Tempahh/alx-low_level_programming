#include "main.h"
#include <ctype.h>
/**
 * string_toupper - lower to upper
 * @s: pointer to char params
 *
 * Return: *s
 */
char *cap_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
if (i == 0 || isspace(s[i - 1]) || ispunct(s[i - 1]))
{
s[i] = toupper(s[i]);
}
}
i++;
}
return (s);
}
