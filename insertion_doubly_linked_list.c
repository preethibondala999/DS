#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head;
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d-->%d\n",temp->data,temp->next);
		temp=temp->next;
	}
}
void create_list()
{
	struct node *n1,*n2,*n3,*n4;
	n1=(struct node *)malloc(sizeof(struct node));
	n2=(struct node *)malloc(sizeof(struct node));
	n3=(struct node *)malloc(sizeof(struct node));
	n4=(struct node *)malloc(sizeof(struct node));
	printf("enter 4 data values\n");
	scanf("%d%d%d%d",&n1->data,&n2->data,&n3->data,&n4->data);
	n1->prev=NULL;
	n1->next=n2;
	n2->prev=n1;
	n2->next=n3;
	n3->prev=n2;
	n3->next=n4;
	n4->prev=n3;
	n4->next=NULL;
	head=n1;
	display();
}
void insert_begin()
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter new node data\n");
	scanf("%d",&newnode->data);
	newnode->data;
	newnode->next=head;
	newnode->prev=NULL;
	head=newnode;
	display();
}
void insert_end()
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter new node data\n");
	scanf("%d",&newnode->data);
	newnode->data;
	newnode->next=NULL;
	struct node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->prev=temp;
	display();
}
void insert_position()
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter new node data\n");
	scanf("%d",&newnode->data);
	newnode->data;
	int i,position;
	printf("enter position\n");
	scanf("%d",&position);
	struct node *temp=head;
	for(i=1;i<position;i++)
	{
		if(temp->next!=NULL)
		{
			temp=temp->next;
		}
	}
	newnode->next=temp->next;
	temp->next=newnode;
	newnode->prev=temp;
	display();
}
void deletion_begin()
{
	if(head==NULL)
	return;
	struct node *temp=head;
	head=head->next;
	free(temp);
	head->prev=NULL;
	display();
}
void deletion_end()
{
	if(head==NULL)
	return;
	if(head->next==NULL)
	{
		free(head);
		head=NULL;
		return;
	}
	struct node *temp=head; 
	while(temp->next!=NULL&&temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	struct node *lastnode=temp->next;
	temp->next=NULL;
	free(lastnode);
	display();
}
void deletion_position()
{
	struct node *temp,*nextnode;
	int position,i=1;
	printf("enter position\n");
	scanf("%d",&position);
	temp=head;
	while(i<position-1)
	{
		temp=temp->next;
		i=i+1;
	}
	nextnode=temp->next;
	nextnode->prev->next=nextnode->next;
	nextnode->next->prev=nextnode->prev;
	free(nextnode);
	display();
}
int main()
{
	int choice;
	while(1)
	{
	printf("\n1.create list\n2.insert_at_beginning\n3.insert_at_ending\n4.insert_at_position\n5.deletion_at_beginning\n6.deletion_at_ending\n7.deletion_at_position\n8.display\n9.exit\n");
	printf("enter choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:create_list();
		break;
		case 2:insert_begin();
		     break;
		case 3:insert_end();
	         break;
	    case 4:insert_position();
	         break;
	    case 5:deletion_begin();
		     break;
		case 6:deletion_end();
	         break;
	    case 7:deletion_position();
	         break;
	    case 8:display();
	    break;
	    case 9:exit(0);
	    break;
	    default:
	    	printf("Invalid choice!");
	}
    }
	return 0;
}
