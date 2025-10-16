#include<stdio.h>
#include<stdlib.h>
void create_list();
void display();
void insertion_at_beginning();
void insertion_at_ending();
void insertion_at_position();
void deletion_at_beginning();
void deletion_at_ending();
void deletion_at_position();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
int main()
{
    create_list();
    display();
    int choice;
        printf("\n1)insertion at beginning\n2)insertion at ending\n3)insertion at position\n4)deletion at beginning\n5)deletion at ending\n6)deletion at position\n7)exit\n");
        printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertion_at_beginning();
            break;
            case 2:insertion_at_ending();
            break;
            case 3:insertion_at_position();
            break;
            case 4:deletion_at_beginning();
            break;
            case 5:deletion_at_ending();
            break;
            case 6:deletion_at_position();
            break;
            case 7:exit(0);
            break;
            default:
            printf("invalid choice:\n");
        }
    return 0;
}
void create_list()
{
    struct node *n1,*n2,*n3;
    n1=(struct node*)malloc(sizeof(struct node));
    n2=(struct node*)malloc(sizeof(struct node));
    n3=(struct node*)malloc(sizeof(struct node));
    printf("enter n1,n2,n3 data values:\n");
    scanf("%d%d%d",&n1->data,&n2->data,&n3->data);
    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;
    head=n1;
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void insertion_at_beginning()
{
    struct node *n4;
    n4=(struct node*)malloc(sizeof(struct node));
    printf("enter n4 data value:\n");
    scanf("%d",&n4->data);
    n4->next=head;
    head=n4;
    display();
}
void insertion_at_ending()
{
    struct node *n5;
    n5=(struct node*)malloc(sizeof(struct node));
    printf("enter n5 data value:\n");
    scanf("%d",&n5->data);
    n5->next=NULL;
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n5;
    display();
}
void insertion_at_position()
{
    int pos,i;
    printf("enter position:\n");
    scanf("%d",&pos);
    struct node *n6;
    n6=(struct node*)malloc(sizeof(struct node));
    printf("enter n6 data value:\n");
    scanf("%d",&n6->data);
    struct node *temp=head;
    for(i=1;i<pos;i++)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    n6->next=temp->next;
    temp->next=n6;
    display();
}
void deletion_at_beginning()
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
void deletion_at_position()
{
      struct node *temp,*nextnode;
      int pos,i=1;
      printf("enter pos:\n");
      scanf("%d",&pos);
      temp=head;
      while(i<pos-1)
      {
        temp=temp->next;
      }
      nextnode=temp->next;
      temp->next=nextnode->next;
      display();
}       
