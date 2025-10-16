#include<stdio.h>
#include<stdlib.h>
int stack[10],top=-1;
int n;
void push();
void pop();
void display();
void peek();
int main()
{
	int i;
	printf("enter n value:\n");
	scanf("%d",&n);
	printf("enter stack values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&stack[i]);
		top++;
	}
	int choice;
	while(1)
	{
		printf("1)push\n2)pop\n3)display\n4)peek\n5)exit\n");
		printf("enter choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:peek();
			break;
			case 5:exit(0);
			break;
			default:
				printf("Invalid Choice!\n");
		}
	}
	return 0;
}
void push()
{
	if(top==n-1)
	{
		printf("stack is overflow!\n");
	}
	else
	{
		int a;
		printf("enter a value:\n");
		scanf("%d",&a);
		stack[++top]=a;
	}
	display();
}
void pop()
{
	if(top==-1)
	{
		printf("stack is underflow!\n");
	}
	else
	{
		printf("%d is popped\n",stack[top--]);
	}
	display();
}
void peek()
{
	if(top==-1)
	{
		printf("stack is underflow!\n");
	}
	else
	{
		printf("top value = %d\n",stack[top]);
	}
}
void display()
{
	printf("stack values:\n");
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");
}
