// Traversal : Visiting every element of a array exactly once

// Program of Traversal of a Array

#include<stdio.h>

int main() {
    int a[50], size, i;
    printf("Enter the Size of Array \n");
    scanf("%d", &size );
    printf("Enter the elements of Array \n");
    for(i=0; i<size; i++){
        scanf("%d", &a[i]);
    }


    printf("The elements of Array are \n");
    for(i=0; i<size; i++){
        printf("%d \n", a[i]);

    }

    return 0;
}