#include<stdio.h>
#include<stdlib.h>
void main()
{
	int calc(int a, int b)
	{
		printf("Sum of the numbers is %d\n", (a+b));
		printf("Difference of the numbers is %d\n", (a-b));
		printf("Product of the numbers is %d\n", (a*b));
		printf("Division of the numbers is %d\n", (a/b));
	}
	int x,y;
	printf("Enter two numbers:\n");
	scanf("%d %d", &x, &y);
	calc(x,y);
}
