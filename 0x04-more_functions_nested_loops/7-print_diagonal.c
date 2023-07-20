#include "main.h"
/***/
void print_diagonal(int n)
{
    int a = 0;
    while (a < n)
    {
        int b = 0;
        while (b < a)
        {
            _putchar(' ');
            b++;
        }
        _putchar('\\');
        _putchar('\n');
        a++;
    }
    
}