#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *left,*right;
};
struct node *create(int x)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));;
	//newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->data=x;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node* insert(struct node* root, int value) {
    if (root == NULL) {
        return create(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

struct node* search(struct node* root, int value) {
    if (root == NULL || root->data == value) {
        return root;
    }
    if (value < root->data) {
        return search(root->left, value);
    }
    return search(root->right, value);
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
	}
}
int main()
{
	struct node *root=NULL;
	int choice,value;
	printf("1.create\n2.insert\n3.search\n4.inorder\n5.preorder\n6.postorder\n7.exit");
	printf("enter choice:\n");
	scanf("%d",choice);
	while(1){
	switch(choice)
	{
		case 1:printf("enter value:\n");
		scanf("%d",&value);
		root=create(value);
		break;
		case 2:printf("enter value:\n");
		scanf("%d",&value);
		root=insert(root,value);
		break;
		case 3:printf("enter value:\n");
		scanf("%d",&value);
		root=search(root,value);
		break;
		case 4:inorder(root);
		break;
		case 5:preorder(root);
		break;
		case 6:postorder(root);
		break;
		case 7:exit(0);
		break;
		default:
			printf("invalid choice:\n");
	}
    }
}

