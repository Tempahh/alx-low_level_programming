#include "main.h"
/***/
void reverse_array(int *a, int n)
{
int i = 0;
while (n - 1 > i){
int temp = a[i];
a[i] = a[n - 1];
a[n - 1] = temp;
i++;
n--;
}    
}