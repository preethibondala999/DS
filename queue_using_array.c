#include<stdio.h>
void enqueue();
void dequeue();
void display();
void peek();
int front=-1,rear=-1;
int queue[10];
int main()
{
	int choice;
	printf("\n1.enqueue\n2.dequeue\n3.display\n4.peek\n5.exit\n");
	while(1)
	{
	//printf("\n1.enqueue\n2.dequeue\n3.display\n4.peek\n5.exit\n");
	printf("\nenter choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: enqueue();
		break;
		case 2: dequeue();
		        display();
		break;
		case 3: display();
		break;
		case 4: peek();
		break;
		case 5: exit(0);
		break;
		default:
			printf("invalid choice!\n");
	}
    }
	return 0;
}
void enqueue()
{
	int value;
	printf("Enter the value to be insert: "); 
    scanf("%d",&value); 
	if(front==-1 && rear==-1)
	{
		rear++;
		front++;
		queue[rear]=value;
	}
	else if(rear==9)
	{
		printf("queue is full!\n");
	}
	else
	{
		rear++;
		queue[rear]=value;
	}
	display();
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
	    printf("queue is empty!\n");
	}
    else
    {
    	int y=queue[front];
    	front++;
    	return y;
	}
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
	    printf("queue is empty!\n");
	}
    else
	{   
        for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}	
	}
}
void peek()
{
	if (front == -1 && rear==-1) 
	{
        printf("Queue is empty!\n");
    } 
	else 
	{
        printf("the peek value is : %d",queue[front]);
    }
}
