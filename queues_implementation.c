#include<stdio.h>
#include<stdlib.h>
void main()
{
	int queue[N];
	//inserting an element
	int front=-1;
	int rear=-1;
	
	//enqueue function
	void enqueue(e)
	{
		if (rear==N-1) //if queue is full
		{
			printf("Overflow");
		}
		else if (front==-1 && rear==-1) //if queue is empty
		{
			front=rear=0;
			queue[rear]=x;
		}
		else
		{
			rear++;
			queue[rear]=x;
		}
		return 
	}
	
	//dequeue function
	void dequeue()
}
