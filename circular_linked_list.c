#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void createNode() 
{
    struct Node *n1, *n2, *n3;
    n1 = (struct Node*)malloc(sizeof(struct Node));
    n2 = (struct Node*)malloc(sizeof(struct Node));
    n3 = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter 3 values:\n");
    scanf("%d %d %d", &n1->data, &n2->data, &n3->data);
    n1->next = n2;
    n2->next = n3;
    n3->next = n1;
    head = n1;
    display();
}
void display() 
{
	struct Node* temp = head;
    do 
	{
        printf("%d -> %d\n",temp->data,temp->next);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}
void insertAtBeginning(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (head == NULL) 
	{
        newNode->next = newNode;
        head = newNode;
    } 
	else 
	{
        struct Node* temp = head;
        while (temp->next != head) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }
    display();
}
void insertAtEnd(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (head == NULL) 
	{
        newNode->next = newNode;
        head = newNode;
    } 
	else 
	{
        struct Node* temp = head;
        while (temp->next != head) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    display();
}
void insertAtPosition(int data, int position) 
{
	int i;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (position == 1) 
	{
        insertAtBeginning(data);
        return;
    }
    struct Node* temp = head;
    for(i = 1; i < position - 1 && temp->next != head; i++) 
	{
        temp = temp->next;
    }
    if (temp->next == head) 
	{
        insertAtEnd(data);
    } 
	else 
	{
        newNode->next = temp->next;
        temp->next = newNode;
    }
    display();
}
void deleteAtBeginning() 
{
    if (head == NULL) 
	{
        printf("The list is empty.\n");
        return;
    }
    if (head->next == head) 
	{
        free(head);
        head = NULL;
    } 
	else 
	{
        struct Node* temp = head;
        while (temp->next != head) 
		{
            temp = temp->next;
        }
        struct Node* toDelete = head;
        temp->next = head->next;
        head = head->next;
        free(toDelete);
    }
    display();
}
void deleteAtEnd() 
{
    if (head == NULL) 
	{
        printf("The list is empty.\n");
        return;
    }
    if (head->next == head) 
	{
        free(head);
        head = NULL;
    } 
	else 
	{
        struct Node* temp = head;
        while (temp->next->next != head) 
		{
            temp = temp->next;
        }
        struct Node* toDelete = temp->next;
        temp->next = head;
        free(toDelete);
    }
    display();
}
void deleteAtPosition(int position) 
{
	int i;
    if (head == NULL) 
	{
        printf("The list is empty.\n");
        return;
    }
    if (position == 1) 
	{
        deleteAtBeginning();
        return;
    }
    struct Node* temp = head;
    for (i = 1; i < position - 1 && temp->next != head; i++) 
	{
        temp = temp->next;
    }
    if (temp->next == head) 
	{
        printf("Invalid position!\n");
        return;
    }
    struct Node* toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
    display();
}
int main() 
{
    int choice, value, position;
    while (1) 
	{
        printf("\n1.create_list\n2.insert_at_beginning\n3.insert_at_ending\n4.insert_at_position\n5.display\n6.deletion_at_begining\n7.deletion_at_ending\n8.deletion_at_position\n9.exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
		{
			case 1:
			    createNode();
				break; 
            case 2:
                printf("Enter the value to insert at the beginning: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;
            case 3:
                printf("Enter the value to insert at the end: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 4:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                insertAtPosition(value, position);
                break;
            case 5:
                display();
                break;
            case 6:
                deleteAtBeginning();
                break;
            case 7:
                deleteAtEnd();
                break;
            case 8:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                deleteAtPosition(position);
                break;
            case 9:
                printf("Exiting...\n");
                exit(0);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
