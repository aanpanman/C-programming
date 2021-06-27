#include<stdio.h>
int main()
{
    int a,b,c;
    int *p;
    printf("enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    c=a*b;
    *p=c;
    printf("%d %d", p, c);
    return 0;
}
