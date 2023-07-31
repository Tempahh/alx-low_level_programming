#include "main.h"
/**
 * *_memcpy - function to copy memory area
 * @dest: dest for the memory copy
 * @src: memory source to copy
 * @n: number of times to copy the memory
 * Return: Alwyas 0.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p;
p = dest;
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (p);   
}
