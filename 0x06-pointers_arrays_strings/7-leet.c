#include "main.h"
/**
 * leet - encodes a string into 1337
 * @c: String
 * Return: string that is encoded
 */
char *leet(char *a)
{
char *c = a;
char arr1[] = {'A', 'E', 'O', 'T', 'L'};
char arr2[] = {4, 3, 0, 7, 1};
while (*a)
{
for (int i = 0; i < sizeof(arr1)/sizeof(char); i++)
{
if (*a == arr1[i] || *a == arr1[i] + 32)
*a = 48 + arr2[i];
}
a++;
}
return (c);
}
