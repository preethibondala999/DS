#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void createNode() 
{
    struct Node *n1, *n2, *n3, *n4;
    n1 = (struct Node*)malloc(sizeof(struct Node));
    n2 = (struct Node*)malloc(sizeof(struct Node));
    n3 = (struct Node*)malloc(sizeof(struct Node));
    n4 = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter 4 values:\n");
    scanf("%d %d %d %d", &n1->data, &n2->data, &n3->data, &n4->data);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;  
    head = n1;  
}
void display() 
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data); 
        temp = temp->next;
    }
    printf("NULL\n");
}
void reverseList() 
{
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;   
        current->next = prev;   
        prev = current;         
        current = next;        
    }
    head = prev; 
}
int main() 
{
    createNode();  
    printf("Original list:\n");
    display();    
    reverseList(); 
    printf("Reversed list:\n");
    display();    
    return 0;
}
