#include<stdio.h>
void swap(int a, int b);

void main(){
	int a=2, b=3;
	char c='r';
	printf("ASCii:%d", c);
	swap(a,b);
	
}

void swap(int a, int b){
	print("%d%d", a,b);
	int temp = a;
	a = b;
	b = temp;
	print("%d%d", a,b);
}
