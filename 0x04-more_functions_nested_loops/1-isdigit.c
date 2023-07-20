#include "main.h"
/**
 * isdigit - entry point
 * Description - checks for characters between 0 and 9
 * @c: collects arguments for the function
 * Return - 1 & 0 
*/
int isdigit(int c)
{
if ((c >= 0) && (c < 10))
return (1);
else
return (0);
}
