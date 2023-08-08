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
int c = strlen(s1) + strlen(s2);
int i = 0, j = 0;
char *new_pointer;
new_pointer = malloc((c + 1) * sizeof(char));
if (new_pointer == NULL)
return NULL;
for (i = 0; s1[i]; i++)
new_pointer[i] = s1[i];
for (j = 0; s2[j]; j++)
new_pointer[i + j] = s2[j];
new_pointer[c] = '\0';
return (new_pointer);
}
