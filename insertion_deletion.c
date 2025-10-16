#include<stdio.h>
#include<stdlib.h>
void create_list();
void display();
void insert_at_beginning();
void insert_at_ending();
void insert_at_position();
void deletion_at_begining();
void deletion_at_ending();
void deletion_at_position();
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void create_list()
{
	struct node *n1,*n2,*n3,*n4,*n5,*n6;
	n1=(struct node*)malloc(sizeof(struct node));
	n2=(struct node*)malloc(sizeof(struct node));
	n3=(struct node*)malloc(sizeof(struct node));
	n4=(struct node*)malloc(sizeof(struct node));
	n5=(struct node*)malloc(sizeof(struct node));
	n6=(struct node*)malloc(sizeof(struct node));
	printf("enter data values:\n");
	scanf("%d%d%d%d%d%d",&n1->data,&n2->data,&n3->data,&n4->data,&n5->data,&n6->data);
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	n6->next=NULL;
	head=n1;
}
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d----->%d\n",temp->data,temp->next);
		temp=temp->next;
	}
}
int main()
{
	create_list();
	display();
	int choice;
	while(1)	
	{
	printf("\n1.insertion_at_begining\n2.insertion_at_ending\n3.insertion_at_position\n4.diaplay\n5.deletion_at_begining\n6.deletion_at_ending\n7.deletion_at_position\n8.diaplay\n");
	printf("enter choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:insertion_at_begining();
		break;
		case 2:insertion_at_ending();
		break;
		case 3:insertion_at_position();
		break;
		case 4:display();
		break;
		case 5:deletion_at_begining();
		break;
		case 6:deletion_at_ending();
		break;
		case 7:deletion_at_position();
		break;
		case 8:display();
		break;
		default:
			printf("invalid choice!");
	}

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
	printf("enter position:\n");
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
void deletion_at_begining()
{
	if(head==NULL)
	return;
	struct node *temp=head;
	head=head->next;
	free(temp);
	display();
}
void deletion_at_ending()
{
	if (head == NULL) 
    return;  
    if (head->next == NULL) 
	{
        free(head);  
        head = NULL;  
        return;
    }
    struct node* temp = head;
    while (temp->next != NULL && temp->next->next != NULL) 
	{
        temp = temp->next;  
    }
    struct node *lastNode = temp->next;  
    temp->next = NULL;  
    free(lastNode);  
    display();  
}
void deletion_at_position()
{
	struct node *temp,*nextnode;
	int loc,i=1;
	printf("enter loc:\n");
	scanf("%d",&loc);
	temp=head;
	while(i<loc-1)
	{
		temp=temp->next;
		i=i+1;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
	display();
}

