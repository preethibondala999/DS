#include<stdio.h>
#include<stdlib.h>
int stack[10],top=-1;
int n;
void push();
void pop();
void peek();
void display();
int main()
{
    int i;
    printf("enter n value:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",stack[i]);
        top++;
    }
    int choice;
    while(1)
    {
        printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            case 5:exit(0);
            break;
            default:printf("invalid choice!\n");
        }
    }
    return 0;
}
void push()
{
    if(top==n-1)
    printf("stack is full!\n");
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
    printf("stack is full!\n");
    else
    {
        printf("%d is popped",stack[top--]);
    }
    display();
}
void peek()
{
    if(top==-1)
    printf("stack is full!\n");
    else
    printf("the peek value is : %d",stack[top]);
}
void display()
{
    printf("stack elements:\n");
    int i;
    for(i=top;i>=0;i--)
    printf("%d ",stack[i]);
}

