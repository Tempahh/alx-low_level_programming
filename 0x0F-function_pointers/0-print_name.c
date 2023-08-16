#include <stdio.h>
#include <stdlib.h>
/***/
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	(*f)(name);
}
