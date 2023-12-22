// Creating a Single Linked list 

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;

};

    void count_of_nodes(struct node *head){
        int count = 0;
        if (head == NULL)
        {
            printf("Linked List is Empty");
        } else {
        struct node *ptr = NULL;
        ptr = head;
        while (ptr!=NULL)
        {
            count++;
            ptr = ptr ->link;
        }
        printf("%d \n", count);

        }
        
    }

void print_data(struct node *head){
    
    if (head == NULL)
    {
        printf("Linked list is empty \n");
    } else {
        struct node *ptr = NULL;
        ptr = head;
        while (ptr != NULL){
            printf("%d \t", ptr -> data);
            ptr = ptr -> link;
        }

        
    }
    
}


int main(){
    struct node *head = (struct node *)(malloc(sizeof(struct node)));
    head -> data = 123;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 456;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 789;
    current -> link = NULL;
    head-> link -> link = current;




    count_of_nodes(head);




    print_data(head);


    return 0;
}