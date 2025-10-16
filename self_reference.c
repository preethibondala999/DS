#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
struct node node1,node2,node3;
	node1.data=10;
	node1.next=&node2;
	node2.data=20;
	node2.next=&node3;
	node3.data=30;
	node3.next=NULL;
	printf("Node1=%d\n",node1.data);
	printf("Node2=%d\n",node2.data);
	printf("Node3=%d\n",node3.data);
}
