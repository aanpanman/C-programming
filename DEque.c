//Avantika Suryawanshi, 20BCE2051
//Program to implement DEque
#include <stdio.h>

#define MAX 10

void addFront(int *, int, int *, int *);
void addRear(int *, int, int *, int *);
int delFront(int *, int *, int *);
int delRear(int *, int *, int *);
void display(int *);
int count(int *);

int main() 
{
	int arr[MAX];
	int front, rear, i, n;
	front = rear = -1;
	for (i = 0; i < MAX; i++)
	{
		arr[i] = 0;
	}

	addRear(arr, 4, &front, &rear);
	addFront(arr, 3, &front, &rear);
	addRear(arr, 5, &front, &rear);
	addFront(arr, 2, &front, &rear);
	addRear(arr, 6, &front, &rear);
	addFront(arr, 1, &front, &rear);
	
	printf("\nElements in deque: ");
	display(arr);
	
	i = delFront(arr, &front, &rear);
	printf("\nremoved element: %d", i);
	
	printf("\nElements in deque: ");
	display(arr);
	
	addRear(arr, 7, &front, &rear);
	addRear(arr, 8, &front, &rear);
	
	printf("\nElements in deque: ");
	display(arr);
	
	i = delRear(arr, &front, &rear);
	printf("\nremoved element: %d", i);
	
	printf("\nElements in deque: ");
	display(arr);
}

void addFront(int *arr, int item, int *pfront, int *prear) 
{
	int i, k, c;
	
	if (*pfront == 0 && *prear == MAX - 1) 
	{
		printf("\nDeque is full.\n");
		return;
	}
	
	if (*pfront == -1) 
	{
		*pfront = *prear = 0;
		arr[*pfront] = item;
		return;
	}
	
	if (*prear != MAX - 1)
	{
		c = count(arr);
		k = *prear + 1;
		for (i = 1; i <= c; i++)
		{
			arr[k] = arr[k - 1];
			k--;
		}
		arr[k] = item;
		*pfront = k;
		(*prear)++;
	}
	else
	{
		(*pfront)--;
		arr[*pfront] = item;
	}
}

void addRear(int *arr, int item, int *pfront, int *prear) 
{
	int i, k;
	
	if (*pfront == 0 && *prear == MAX - 1) 
	{
		printf("\nDeque is full.\n");
		return;
	}
	
	if (*pfront == -1) 
	{
		*prear = *pfront = 0;
		arr[*prear] = item;
		return;
	}
	
	if (*prear == MAX - 1)
	{
		k = *pfront - 1;
		for (i = *pfront - 1; i < *prear; i++) 
		{
			k = i;
			if (k == MAX - 1)
			arr[k] = 0;
			else
			arr[k] = arr[i + 1];
			}
		(*prear)--;
		(*pfront)--;
	}
	(*prear)++;
	arr[*prear] = item;
}

int delFront(int *arr, int *pfront, int *prear) 
{
	int item;
	
	if (*pfront == -1) 
	{
		printf("\nDeque is empty.\n");
		return 0;
	}
	
	item = arr[*pfront];
	arr[*pfront] = 0;
	
	if (*pfront == *prear)
	*pfront = *prear = -1;
	else
	(*pfront)++;
	
	return item;
}

int delRear(int *arr, int *pfront, int *prear) 
{
	int item;
	
	if (*pfront == -1) 
	{
		printf("\nDeque is empty.\n");
		return 0;
	}
	
	item = arr[*prear];
	arr[*prear] = 0;
	(*prear)--;
	if (*prear == -1)
	*pfront = -1;
	return item;
}

void display(int *arr) 
{
  int i;
  for (i = 0; i < MAX; i++)
  {
  	printf("  %d", arr[i]);
  }
}

int count(int *arr) 
{
  int c = 0, i;

  for (i = 0; i < MAX; i++) 
  {
    if (arr[i] != 0)
    c++;
  }
  return c;
}
