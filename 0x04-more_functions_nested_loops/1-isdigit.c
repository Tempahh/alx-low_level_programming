#include "main.h"
/**
 * _isdigit - entry point
 * Description - checks for characters between 0 and 9
 * @c: collects arguments for the function
 * Return: 1 & 0
*/
int _isdigit(int c)
{
if ((c > 47) && (c < 58))
return (1);
else
return (0);
}
