#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory
 * @b: function parameter
 * Return: new pointer
*/
void *malloc_checked(unsigned int b)
{
unsigned int *pointer = malloc(b);
if(pointer == NULL)
return (98);
return (pointer);
}
