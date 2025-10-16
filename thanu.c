#include<stdio.h>
#include<stdlib.h>
void create();
void insert_at_beg();
void insert_at_end();
void display();
struct node
{
	int data;
	struct node*next;
}*temp;
struct node*head=NULL;
void display()
{
	struct node *temp=head;
	do
	{
		printf("%d---->%d\n",temp->data,temp->next);
		temp=temp->next;
	}while(temp!=head);
	printf("(head)\n");
}
void create()
{
	struct node *n1,*n2,*n3;
	n1=(struct node*)malloc(sizeof(struct node));
	n2=(struct node*)malloc(sizeof(struct node));
	n3=(struct node*)malloc(sizeof(struct node));
	printf("enter values of 3nodes");
	scanf("%d%d%d",&n1->data,&n2->data,&n3->data);
	n1->next=n2;
	n2->next=n3;
	n3->next=n1;
	head=n1;
	display();
}
void insert_at_beg()
{
	
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	printf("enter data for newnode");
	scanf("%d",&new->data);
	if(head==NULL)
	{
		new->next=new;
		head=new;
	}
	else
	{
	struct node *temp=head;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->next=new;
	new->next=head;
	head=new;
	display();
    }
}
void insert_at_end()
{
	
	struct node*new;
	new=(struct node*)malloc(sizeof(struct node));
	printf("enter data for newnode");
	scanf("%d",&new->data);
	temp=head;
	temp->next=new;
	new->next=head;display();
	
}
int main()
{
	create();
	int i,choice;
		while(1){
	printf("1.create\n 2.insert at beg\n 2.insert at end\n");
		printf("enter your choice");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			create();
			break;
		case 2:
		insert_at_beg();
			break;
		case 3:
		insert_at_end();
			break;
	}
}display();
}

