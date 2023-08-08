#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * str_concat - function to concatenate two strings
 * @s1: function parameter
 * @s2: function parameter
 * Return: return pointer to new string
*/
char *str_concat(char *s1, char *s2)
{
char *new_pointer;
int i = 0, j = 0, c = 0;
if ( s1 == NULL)
s1 = "";
if(s2 == NULL)
s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
c++;
new_pointer = malloc(sizeof(char) * c);
if (new_pointer == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
new_pointer[j++] = s1[i];
for (i = 0; s2[i]; i++)
new_pointer[j++] = s2[i];
return (new_pointer);
}
