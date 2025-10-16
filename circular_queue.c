#include<stdio.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;
void enqueue(int item)
{
    if(front==-1 && rear==-1)
    {
	   front++;
	   rear++;
	   queue[rear]=item;
    }
    else if((rear+1)%max==front)
    {
    	printf("queue is overflow!\n");
	}
	else
	{
		rear=(rear+1)%max;
		queue[rear]=item;
	}
	display();
}
void dequeue()
{
	if(front==-1 && rear==-1)
    {
	   printf("queue is underflow!\n");
    }
    else if(front==rear)
    {
    	printf("\n the dequeued element is %d\n",queue[front]);
    	front=-1;
    	rear=-1;
	}
	else
	{
		printf("\n the dequeued element is %d\n",queue[front]);
		front=(front+1)%max;
	}
	display();
}
void display()
{
	int i=front;
	if(front==-1 && rear==-1)
    {
	   printf("queue is underflow!\n");
    }
    else
    {
    	printf("\nelements in the queue:");
    	while(i<=rear)
    	{
    		printf("%d ",queue[i]);
    		i=(i+1)%max;
		}
	}
}
int main()
{
	int choice,item;
	while(1)
	{
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		printf("enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the element to enqueue: ");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("exiting...\n");
				exit(0);
				break;	
			default:
				printf("Invalid choice!!!");
		}
	}
	return 0;
}
