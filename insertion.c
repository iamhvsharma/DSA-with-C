// Insertion : To insert a element in an Defined array with definite size and elements 

// Note : If array is full then that condition is a overflow condition so you can't insert a element.

#include<stdio.h>

int main() {
    // Let' insert a element at a position which is in between of a array
    // For eg We have a array of 5 elements and we want to insert a element at 3rd Position of 2nd Index

    // Declaration of variables 

    int a[50], size, pos, i, num;
    printf("Enter the size of Array \n");
    
    // Defining size of array 
    scanf("%d", &size);

    // Taking input of Array elements
    printf("Enter the elements of Array \n");
    for(i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    
    // Printing the array
    printf("The elements of Array are \n");
    for(i=0; i<size; i++){
        printf("%d " " ", a[i]);
    }

    printf("\n");

    // Read Number to insert
    printf("Enter the number you want to insert \n");
    scanf("%d", &num);


    // Read Position on which you want to insert the number
    printf("On which Position you want to insert your Number? \n");
    scanf("%d", &pos);

    // Shifting of elements inside a array to insert a Element
    // We will use if else to Implement Bound checking in our Insertion

    if(pos<=0 || pos>size){
        printf("Invalid Position");
    } else {
        for(i=size-1; i>=pos-1; i--){
            a[i+1]=a[i];
        }

        a[pos-1]=num;
        size++;

   
    }
    printf("%d/n", size);

    for(i=0; i<size; i++){
        printf("%d " " ", a[i]);
    }

    }





