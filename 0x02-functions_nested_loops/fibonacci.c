#include <stdio.h>
#include <stdlib.h>
/**/
int main (void)
{
    int a = 1, b = 2, d = 0, c = 20, i = 0, j = 0;
    while (d < c)
    {
        //if (d <= 50)
        printf("%d ", a);
        printf("\n");
        i = a + b;
        if (a % 2 == 0)
        {
            j += a;
        }
        a = b;
        b = i;
        d++;
        
    }
    printf("%d\n", j);
}