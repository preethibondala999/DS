#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node*head;
void main()
{
	struct node *ptr;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if (ptr == NULL) 
	{
        printf("Memory allocation failed\n");
        return;
    }
	printf("\n enter value \n");
	scanf("%d",&item);
	ptr->data=item;
	ptr->next=head;
}                  
