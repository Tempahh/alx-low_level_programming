#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * reset_to_98 - reset variables to 98
 * @n: parameter for collecting arguments
 * Return: Always 0.
*/
void reset_to_98(int *n)
{
    *n = 98;
}

int main(void)
{
   int b, *c;

   c = &b;
   b = 45;
   reset_to_98(c);
   return (0);
}