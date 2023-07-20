#include "main.h"
/**
 * isupper - entry point
 * @c: parameter to take argument
 * Description - program to check for uppercase character
 * Return - 1 & 0 Success
*/
int isupper(int c)
{
if (c > 65 && c < 90)
{
return (1);
}
else
return (0);
}
