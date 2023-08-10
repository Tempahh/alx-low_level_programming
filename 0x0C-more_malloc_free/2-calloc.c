#include <stdlib.h>
/***/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    if (nmemb == 0 || size == 0)
        return NULL;

    unsigned int total_size = nmemb * size;
    void *ptr = malloc(total_size);

    if (ptr == NULL)
        return NULL;

    char *char_ptr = ptr;
    for (unsigned int i = 0; i < total_size; i++)
        char_ptr[i] = 0;

    return ptr;
}
