#include "main.h"
#include <stdio.h>
/**
 * swap_int - used to swap integers
 * @a: first operand
 * @b: second operand
 * Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
