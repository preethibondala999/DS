#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void display()
{
	struct node *temp=top;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void push()
{
	if(isFull(top))
	{
		printf("stack is overflow\n");
	}
	else
	{
		struct node *new;
		new=(struct node *)malloc(sizeof(struct node));
		printf("enter new node data\n");
		scanf("%d",&new->data);
		new->data;
		new->next=top;
		top=new;
		display();
	}
}
void pop()
{
	if(isempty(top))
	{
		printf("stack is underflow\n");
	}
	else
	{
		struct node *delete;
        delete=top;
	    top=top->next;
	    int x=delete->data;
	    free(delete);
	    printf("the popped element is %d\n",x);
	    display();
	}
}
void peek()
{
	if(isempty(top))
	{
		printf("stack is underflow\n");
	}
	else
	{
		printf("the top most element is %d\n",top->data);
	}
}
int isFull(struct node *top)
{
	struct node *p=(struct node *)malloc(sizeof(struct node));
	if(p==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty(struct node *top)
{
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int choice;
	while(1)
	{
		printf("\nenter choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			/*case 1:
			{
				create();
				break;	
			}*/
			case 1:
			{
				push();
				break;	
			}
			case 2:
			{
				pop();
				break;	
			}
			case 3:
			{
				peek();
				break;	
			}
			case 4:
			{
				display();
				break;	
			}
			case 5:
			{
				exit(0);
				break;	
			}
		}
	}
}

