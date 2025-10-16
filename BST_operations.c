#include<stdio.h>
#include<stdlib.h>
//Define a node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(!newNode) 
	{
        printf("Memory allocation error!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
// Insert a node in BST
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data){
        root->left = insert(root->left, data);
    } else if (data > root->data){
        root->right = insert(root->right, data);
    }
    return root;
}
// Inorder traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
// Preorder traversal
void preorder(struct Node* root) {
    if (root != NULL) {
    	printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right); 
    }
}
// Postorder traversal
void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
// Search for a value in BST
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;
    if (key < root->data)
        return search(root->left, key);
    return search(root->right, key);
}
// Find minimum value node
struct Node* findMin(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}
// Delete a node from BST
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL)
        return root;
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node found
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
// Main function with switch-case
int main() {
    struct Node* root = NULL;
    int i,choice,data;
    while (1) {
        printf("\n--- Binary Search Tree Operations ---\n");
        printf("1. Create Node\n2. Insert\n3. Delete\n4. Inorder\n5. Preorder\n6. Postorder\n7. search\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter value: ");
            scanf("%d",&data);
            root = createNode(data);
            break;
        case 2:
        	for(i=1;i<=5;i++){
            printf("Enter value to insert: ");
            scanf("%d", &data);
            root = insert(root, data);
            printf("Inserted %d\n", data);
            }
            break;
        case 3:
            printf("Enter value to delete: ");
            scanf("%d", &data);
            root = deleteNode(root, data);
            printf("Deleted %d (if present)\n", data);
            break;
        case 4:
            printf("Inorder Traversal: ");
            inorder(root);
            printf("\n");
            break;
		case 5:
            printf("Preorder Traversal: ");
            preorder(root);
            printf("\n");
            break;
        case 6:
            printf("Postorder Traversal: ");
            postorder(root);
            printf("\n");
            break;
        case 7:
            printf("Enter value to search: ");
            scanf("%d", &data);
            if (search(root, data) != NULL)
                printf("%d found in the BST.\n", data);
            else
                printf("%d not found in the BST.\n", data);
            break;
        case 8:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
