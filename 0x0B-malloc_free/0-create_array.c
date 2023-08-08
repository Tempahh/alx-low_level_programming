#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function to  allocate new array
 * @size: argument parameter
 * @c: argument parameter
 * Return: the new array block
*/
char *create_array(unsigned int size, char c)
{
char *new_array;
unsigned int i = 0;
if (size == 0)
return (NULL);
new_array = malloc(size * sizeof(char));
if (new_array != NULL)
{
for (i = 0; i < size; i++)
*(new_array + i) = c;
}
return (new_array);
}
