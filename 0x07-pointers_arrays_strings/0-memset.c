#include "main.h"
/**
 * *_memset - function to fill memory with constant byte
 * @s: buffer array to fill up
 * @b: constant to fill into memory area
 * @n: number of memory area to fill up
 * Return: Always 0.
*/
char *_memset(char *s, char b, unsigned int n)
{
    for (int i = 0; n > 0; i++)
    {
        s[i] = b;
        n--;
    }
    return (s);
}