#include<stdio.h>
#include<stdlib.h>
void create_list();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void create_list()
{
    struct node *first,*second;
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&first->data);
	first->next=second;
	scanf("%d",&second->data);
	second->next=NULL;
	head=first;
}
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d-->%d\n",temp->data,temp->next);
		temp=temp->next;
	}
}
int main()
{
	create_list();
	display();
	return 0;
}
