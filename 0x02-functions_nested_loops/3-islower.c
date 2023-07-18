#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * islower - checks for lower case letters
 * Description- this program aims to find lower case haracters
*/
int _islower(int c)
{
if ((c = 'a') && (c <= 'z'))
{
return (1);
}
return (0);
}
