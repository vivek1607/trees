#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

void Double(struct node* root)
{
printf("%d->",root->data);
Double(root->left);
printf("%d-> ",root->data);
Double(root->right);
}
 struct node* create(value)
{
    struct node* nwnode = malloc(sizeof(struct node));
    nwnode->data = value;
    nwnode->left = NULL;
    nwnode->right = NULL;

    return nwnode;
}
struct node* insertLeft(struct node *root, int value) {
    root->left = create(value);
    return root->left;
}
struct node* insertRight(struct node *root, int value){
    root->right = create(value);
    return root->right;}
int main(){
    struct node* root = create(1);
    insertLeft(root, 3);
    insertRight(root, 4);
    insertLeft(root->left, 5);
    insertRight(root->left, 6);
    printf("double order traversal \n");
    Double(root);
}

