#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

void in_order(struct node* root)
{
    if(root == NULL)
    {return NULL;}
    in_order(root->left);
    printf("%d ->", root->data);
    in_order(root->right);
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
    insertLeft(root, 29);
    insertRight(root, 55);

    insertLeft(root->left, 129);
    insertRight(root->left, 92);

    printf("in_order traversal \n");
    in_order(root);


}
