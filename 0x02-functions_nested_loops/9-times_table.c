#include "main.h"
/***/
void times_table(void)
{
int a, b;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
_putchar(a * b + 48);
}
}
}