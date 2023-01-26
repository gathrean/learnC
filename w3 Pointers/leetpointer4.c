#include <stdio.h>

/**
* Write a program in C to add two numbers using pointers.
*/

int main(){

    int first, second, *pointer1, *pointer2, sum;
    printf("\n\nPointer : Add two numbers : \n");
    printf("--------------------------------\n");

    printf("Input the first number : ");
    scanf("%d", &first);

    printf("Input the second number : ");
    scanf("%d", &second);

    pointer1 = &first;
    pointer2 = &second;

    sum = *pointer1 + *pointer2;

    printf("The sum of the entered numbers is : %d\n\n", sum);

    return 0;
}