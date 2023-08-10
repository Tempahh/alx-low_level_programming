#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory
 * @b: function parameter
 * Return: new pointer
*/
void *malloc_checked(unsigned int b)
{
void *pointer = malloc(b);
if(!pointer)
return (98);
return (pointer);
}
