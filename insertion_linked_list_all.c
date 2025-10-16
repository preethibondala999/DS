#include<stdio.h>
#include<stdlib.h>
void create_list();
void display();
void insert_at_beginning();
void insert_at_ending();
void insert_at_position();
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
	insert_at_beginning();
	insert_at_ending();
	insert_at_position();
	return 0;
}
void insert_at_beginning()
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node*));
	printf("enter new node value:\n");
	scanf("%d",&new->data);
	new->next=head;
	head=new;
	display();
}
void insert_at_ending()
{
	struct node *new1;
	new1=(struct node*)malloc(sizeof(struct node*));
	printf("enter new1 node value:\n");
	scanf("%d",&new1->data);
	new1->next=NULL;
	struct node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new1;
	display();
}
void insert_at_position()
{
	int pos,i;
	scanf("%d",&pos);
	struct node *new2;
	new2=(struct node*)malloc(sizeof(struct node*));
	printf("enter new2 node value:\n");
	scanf("%d",&new2->data);
	struct node *temp=head;
	for(i=1;i<pos;i++)
	{
		if(temp->next!=NULL)
		{
			temp=temp->next;
		}
	}
	new2->next=temp->next;
	temp->next=new2;
	display();
}
