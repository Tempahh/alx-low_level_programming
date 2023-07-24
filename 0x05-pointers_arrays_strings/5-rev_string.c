#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses strings
 * @s: collects arguments
 * Return: Always 0.
*/
void rev_string(char *s)
{
char *t = s;
char n[460];
short a = 0;
while (*s != '\0')
{
n[a] = *s;
s++;
a++;
}
a = 0;
while (s > t)
{
s--;
*s = n[a];
a++;
}
}
