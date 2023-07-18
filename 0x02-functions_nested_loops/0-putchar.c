#include "main.h"
/**
 * main - entry point
 * write a program to print out _putchar
 * return -  0 shows program sucess
*/
int main(void)
{
char *ch = "_putchar";
while (*ch)
{
_putchar(*ch);
ch++;
}
_putchar('\n');
return (0);
}
