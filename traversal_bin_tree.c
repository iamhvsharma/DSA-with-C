#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * left;
    struct node * right;
};

struct node * createNode(int data){
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}


// Preorder Function - root left right

void preOrder(struct node * root){
    if(root!=NULL){
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
    }
}

// Postorder Function - left right root

void postOrder(struct node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }

}


// Inorder Traversal - left root right

void inOrder(struct node * root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}




int main (){
    struct node * p = createNode(7);
    struct node * p1 = createNode(2);
    struct node * p2 = createNode(1);
    struct node * p3 = createNode(0);
    struct node * p4 = createNode(4);
    // struct node * p5 = createNode(7);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    // p2->left =p5;

    // Calling PreOrder Function 
    preOrder(p);

    printf("\n");

    // Calling Postorder Function 
    postOrder(p);

    printf("\n");


    // Calling InOrder Function
    inOrder(p);
    printf("\n");


}