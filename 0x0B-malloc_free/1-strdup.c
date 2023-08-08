#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function to copy string to a new pointer
 * @str: argument parameter
 * Return: the new string array
*/
char *_strdup(char *str)
{
int i = 0, len = 0;
char *new_array;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
len++;
new_array = malloc((len + 1) * sizeof(char));
if (new_array == NULL)
return (NULL);
for (i = 0; str[i]; i++)
new_array[i] = str[i];
new_array[len] = '\0';
return (new_array);
}
