#include <stdlib.h>
#include <stdio.h>
/**/
int main (void)
{
    int a,b,c = 180;
    for (a = 0; a < c; a++)
    {
        for (b = 0; b < c; b++)
        {
            if (b < a || b == a)
            continue;
            printf("%d%d%d, ", a,b);
        }
        printf("\n");
    }
}