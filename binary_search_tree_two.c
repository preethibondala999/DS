#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left, *right;
};
struct node* create(int x) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = newnode->right = NULL;
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
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
int main() {
	int i;
    struct node* root = NULL;
    int choice, value;
    while (1) {
        printf("\n1. Create\n2. Insert\n3. Search\n4. Inorder\n5. Preorder\n6. Postorder\n7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                root = create(value);
                break;
            case 2:
            	for(i=1;i<=5;i++)
				{
                printf("Enter value: ");
                scanf("%d", &value);
                root = insert(root, value);
                }
                break;
            case 3:
                printf("Enter value: ");
                scanf("%d", &value);
                struct node* found = search(root, value);
                if (found != NULL) {
                    printf("Node with value %d found.\n", found->data);
                } else {
                    printf("Node with value %d not found.\n", value);
                }
                break;
            case 4:
                printf("Inorder traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 5:
                printf("Preorder traversal: ");
                preorder(root);
                printf("\n");
                break;
            case 6:
                printf("Postorder traversal: ");
                postorder(root);
                printf("\n");
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}

