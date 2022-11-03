#include <stdio.h>
#include <unistd.h>
	
int main(void)
{
    int a1;
	int a2;
	    int res;
	
    a1 = 0;
    a2 = 1;
    while (1)
    {
        res = a1 + a2;
        printf("%i + %i = %i\n",a1, a2, res);
        a1 = a2;
        a2 = res;
    }
}