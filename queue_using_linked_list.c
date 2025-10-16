#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL,*rear=NULL;
void enqueue();
void dequeue();
void display();
void peek();
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
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("queue is empty!\n");
		return;
	}
	printf("enter value:\n");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=NULL;
	if(front==NULL && rear==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	display();
}
void dequeue()
{
	struct node *deletednode;
	if(front==NULL)
	{
		printf("queue is empty:\n");
		return;
	}
	else
	{
		deletednode=front;
		front=front->next;
		free(deletednode);
	}
}
void display()
{
	if(front==NULL)
	{
		printf("queue is empty:\n");
		return;
	}
	struct node *temp=front;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void peek()
{
	if (front==NULL) 
	{
        printf("Queue is empty!\n");
        return;
    } 
	else 
	{
        printf("the peek value is : %d",front->data);
    }
}
