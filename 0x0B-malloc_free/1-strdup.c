#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function to copy string to a new pointer
 * @str: argument parameter
 * Return: the new string array
*/
char *_strdup(char *str)
{
int i = 0, j = 0;
char *new_array;
while (*str != '\0')
i++;
new_array = malloc((i + 1) * sizeof(char));
if (new_array != NULL)
{
while (str[j])
{
new_array[i] = str[j];
j++;
}
new_array[i] = '\0';
}
return (new_array);
}
