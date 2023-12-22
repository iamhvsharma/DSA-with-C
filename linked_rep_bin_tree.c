#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * left;
    struct node * right;
};

struct node * createNode(int data){
    struct node * n;
    n = (struct node *)malloc(sizeof (struct node));
    n->data=data;
    n->left = NULL;
    n->right =NULL;
    return n;
}

void printNode(struct node *n) {
    if (n != NULL) {
        printf("Node data: %d\n", n->data);
    } else {
        printf("Node is NULL\n");
    }
}

int main (){
    // struct node * p;
    // p = (struct node *)malloc(sizeof (struct node));
    // p->data=2;
    // p->left = NULL;
    // p->right =NULL;

    // if (p != NULL) {
    //     printf("Node data: %d\n", p->data);
    // } else {
    //     printf("Node is NULL\n");
    // }

    
    struct node * a = createNode(2);
    struct node * a1 = createNode(3);
    struct node * a2 = createNode(4);

    a->left = a1;
    a->right = a2;

    printNode(a);
    printNode(a1);
    printNode(a2);


    free(a);
    free(a1);
    free(a2);
    
    return 0;
}