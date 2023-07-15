#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    for (a = 0; a < 1000; a++)
    {
        b = a % 10; /* fetches the single digits */
        c = a / 10; /* fetches the double digits */
        d = (a / 10) % 10;

        if (c < d && d < b)
        {
            putchar(c + '0');
            putchar(b + '0');
            putchar(d + '0');

            if (a < 700)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}
