#include<stdio.h>
#include<stdlib.h>

int n, i;
int a[100];

void main()
{	
	
	int *ptr; 
    int n, i, c; 
    scanf("%d", &n);
  
    ptr = (int*)calloc(n, n*sizeof(int));  // Dynamically allocate memory using calloc() 
  
    for (i = 0; i < n; i++) 
	{ 
        scanf("%d", &c);
		ptr[i] = c; 
    } 
    
    /*for (i = 0; i < n; i++) 
	{ 
        printf("%d ", ptr[i]); 
    } 
    
    for (i = 0; i < n; i++)
	{
		if (9 > ptr[i] > 0)
		{
		continue;
		}
		else 
		{
			ptr[i] = sum(ptr[i]);
		}
	}

	for (i = 0; i < n; i++) 
	{ 
        ptr[i] = sum(ptr[i]); 
    } 
    
	recursivesum();
	int total = sumend(ptr[n], n);
	
	for (i = 0; i < n; i++)
	{
		if (ptr[i] == total)
		{
			ptr[i] = 1;
		}
		else
		{
			ptr[i] = 0;
		}
		
	}*/

	
}

int sum(int n) 
{  
   int s = 0; 
   while (n != 0) 
   { 
       s = s + n % 10; 
       n = n/10; 
   } 
   return s; 
} 

int Recursive_Sum(int a[], int n)
{
	for (i = 0; i < n; i++)
	{ 
		if (9 > a[i] > 0)
		
		/*for (i = 0; i < n; i++)
		{
			if (9 > a[i] > 0)
			{
			continue;
			}
			else 
			{
				a[i] = sum(a[i]);
			}
		}*/
	}
}


int sumend(int arr[], int n)
{
    int sum = 0; 
    
    for (i = 0; i < n; i++)
    sum += arr[i];
 
    return sum;
}
