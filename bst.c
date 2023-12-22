#include<stdio.h>
#include<stdlib.h>


// Steps to create a BST
// 1. Create a Node Structure which have Data, left and Right Pointer
// 2. Create a function to create Node

struct node{ 
    int data;
    struct node * left;
    struct node * right;

};

// Create Node Function 
struct node * createNode(int data){
    struct node * p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}

// Print Data function to Print Node

void printData(struct node * p){
    if(p!=NULL){
        printf("%d \n",p->data);
    }else{
        printf("The node is NULL");
    }
}


// Inorder function
void inOrder (struct node * root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d \t", root->data);
        inOrder(root->right);
    }
}


// To check for BST we will use the below function

int isBST (struct node * root){
    static struct node * prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }

        if (prev!=NULL && root->data <= prev->data ){
            return 0;
        }
        prev=root;
        return isBST(root->right);
    } else {
        return 1;
    }


}

// Search Function 

struct node * search (struct node * root, int key){
    if(root==NULL)
    return NULL;
    if(root->data==key)
    return root;
    else if(root->data>key)
    return search(root->left, key);
    else
    return search(root->right, key);

}


struct node * searchIter (struct node * root, int key){

    while(root!=NULL){
        if(root->data==key){
            return root;
        }
        else if(root->data>key){
            root = root->left;
        
        } 
        else {
            root = root->right;
        }

        
    }
    return NULL;

}

// Function to Perform Insertion in a Binary Tree
void insert(struct node * root, int key){
    struct node * prev = NULL;
    while(root!=NULL){
        prev = root;
        if(key==root->data){
            return;
        } 
        else if (key<root->data)
        {
            root = root->left;
        }
        else{
            root = root->right;
        }
        
    }

    struct node * new = createNode(key);
    if(key<prev->data){
        prev->left = new;
    } else {
        prev->right =new;
    }
}




int main(){
    /*
    Tree we want to make 
                 100
                 /  \
                50   150
               / \      \
             30   70     180
             /      \       \
            20        80     200
    */  

   // Creation of Nodes
    struct node * a = createNode(100);
    struct node * a1 = createNode(50);
    struct node * a2 = createNode(150);
    struct node * a3 = createNode(30);
    struct node * a4 = createNode(70);
    struct node * a5 = createNode(180);
    struct node * a6 = createNode(20);
    struct node * a7 = createNode(80);
    struct node * a8 = createNode(200);
    // struct node * a = createNode(100);

    // Linking according to BST

    a->left=a1;
    a->right=a2;
    a1->left=a3;
    a1->right=a4;
    a3->left=a6;
    a4->right=a7;
    a2->right=a5;
    a5->right=a8;


    // printData(a);

    // To check that the Given Binary tree is Binary search tree or not
    // printf("%d", isBST(a)); 

    // If it return 1 then it means true hence the given tree is BST
    // If it returns 0 then it means false hence the given tree is not a BST


    // // Calling search function to search 80 - Recursively 
    // struct node * xyz = search(a, 80);
    // if(xyz!=NULL){
    //     printf("\nFound: %d", xyz->data);
    
    // } else{
    //     printf("\nElement is not Found");
    // }


    // // Calling search function to search 80 - Iteratively 
    // struct node * abc = searchIter(a, 80);
    // if(abc!=NULL){
    //     printf("\nFound: %d", abc->data);
    
    // } else{
    //     printf("\nElement is not Found");
    // }



    // Insertion in a Binary Tree
    // insert(a,170);
    // inOrder(a);
    // Key added

}