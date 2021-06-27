#inlcude<stdio.h>
void main()
{
	int *p1, *p2;
	p1=calloc(1,sizeof(int));
	p2=malloc(sizeof(int));
	scanf("%d", &p1);
	scanf("%d", &p2);
	printf("%d %d\n", p1, p2);
	printf("%x %x", &p1, &p2);
	
}
