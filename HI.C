#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * left;
    struct node * right;
};

struct node * createNode(int data){
    struct node * ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;

}

void preOrder(struct node * root){
    if(root!=NULL){
        printf("%d \t", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }

}

void postOrder(struct node * root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d \t", root->data);
    }
}

void inOrder(struct node * root){
    if(root != NULL){
        postOrder(root->left);
        printf("%d \t", root->data);
        postOrder(root->right);
        
    }
}


int main(){
    struct node * a = createNode(10);
    struct node * a1 = createNode(20);
    struct node * a2 = createNode(30);
    struct node * a3 = createNode(40);
    struct node * a4 = createNode(50);

    // Linking 
    a->left=a1;
    a->right=a2;
    a1->left=a3;
    a1->right=a4;


    preOrder(a);
    printf("\n");
    postOrder(a);
    printf("\n");
    inOrder(a);




}