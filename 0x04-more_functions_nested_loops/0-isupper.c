#include "main.h"
/**
 * _isupper - entry point
 * @c: parameter to take argument
 * Description - program to check for uppercase character
 * Return - 1 if uppercase & 0 if lowercase Success
*/
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
