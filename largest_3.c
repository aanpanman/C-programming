#include<stdio.h>
void main()
{
	int a=2, b=3, c=5;
    if (a>b)
    {
        if (a>c)
            printf("%d", a);
        else 
            printf("%d", c);
    }
    else
    {
        if (b>c)
            printf("%d", b);
        else 
            printf("%d", c);
    }
}