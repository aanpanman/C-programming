//Avantika Suryawanshi, 20BCE2051
//Program to impliment circular queue 
#include <stdio.h>

#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

int isFull()  //Check if the queue is full 
{
	if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) 
    	return 1;
	else
    	return 0;
}

int isEmpty() //Check if the queue is empty
{
	if (front == -1) 
		return 1;
	else
  		return 0;
}

void enQueue(int element) //Insert an element
{
	if (isFull())
    	printf("\n Queue full \n");
	else 
	{
    	if (front == -1) front = 0;
    	rear = (rear + 1) % SIZE;
    	items[rear] = element;
    	printf("\n Inserted element = %d", element);
    }
}

int deQueue() //Delete an element
{
	int element;
	if (isEmpty()) 
	{
    	printf("\n Queue empty \n");
    	return (-1);
    } 
	else 
	{
    	element = items[front];
    if (front == rear) 
	{
      front = -1;
      rear = -1;
    } 
    /* Q has only one element, so we reset the 
	queue after dequeing it. */
    else 
	{
      front = (front + 1) % SIZE;
    }
    printf("\n Deleted element = %d \n", element);
    return (element);
  }
}

void display() // Display the queue
{
	int i;
	if (isEmpty())
    	printf(" \n Empty Queue\n");
	else 
	{
    	printf("\n Front = %d ", front);
    	printf("\n Items = ");
    	for (i = front; i != rear; i = (i + 1) % SIZE) 
		{
      		printf("%d ", items[i]);
    	}
    	printf("%d ", items[i]);
    	printf("\n Rear = %d \n", rear);
    }
}

int main() 
{
  deQueue();  //front = -1, queue is empty
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  enQueue(6);  //front == 0 && rear == SIZE - 1, queue is full
  display();
  deQueue();
  display();
  enQueue(7);
  display();
  enQueue(8);  //front == rear + 1, queue is full
  return 0;
}
