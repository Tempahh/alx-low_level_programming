#include <stdlib.h>
/**
 * _calloc - function to allocate memory for a new array
 * @nmemb: function parameter
 * @size: function parameter
 * Return: returns new pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *char_ptr;
	if (nmemb == 0 || size == 0)
		return NULL;

	unsigned int total_size = nmemb * size;

	void *ptr = malloc(total_size);

	if (!ptr)
		return (NULL);

	char_ptr = ptr;
    
	for (i = 0; i < total_size; i++)
		char_ptr[i] = '\0';

	return (ptr);
}
