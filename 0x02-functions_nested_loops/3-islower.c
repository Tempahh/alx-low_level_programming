#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _islower - checks for lower case letters
 * @prameter c- collecting argument
 * Description- this program aims to find lower case haracters
 * Return: Always 0.
*/
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
