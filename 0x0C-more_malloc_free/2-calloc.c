#include <stdlib.h>
/**
 * _calloc - function to allocate memory for a new array
 * @nmemb: function parameter
 * @size: function parameter
 * Return: returns new pointer on success else null value
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);


	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	char_ptr = ptr;
    
	for (i = 0; i < (nmemb * size); i++)
		char_ptr[i] = '\0';

	return (ptr);
}
