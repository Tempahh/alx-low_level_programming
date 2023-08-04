#include <stdio.h>
#include <stdlib.h>
/**/
int main (void)
{
    int a,b,c = 1024;
    for (a = 0; a < c; a++)
    {
        if (a % 3 ==0 || a % 5 == 0)
            b = a + b;
    }
    printf("%d", b);
    printf("\n");
}
