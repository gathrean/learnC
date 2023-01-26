#include <stdio.h>

/**
 * "6. Write a program in C to find
 * the maximum number between two numbers using a pointer."
 *
 * @return 0;
*/

int main(){

    printf("Pointer : Find maximum number between two numbers using pointers");
    printf("\n--------------------------------------------------------------\n");

    int first, second, *ptr1, *ptr2;
    ptr1 = &first;
    ptr2 = &second;

    printf("Input the first number: ");
    scanf("%d", ptr1);

    printf("Input the second number: ");
    scanf("%d", ptr2);

    if(*ptr1 > *ptr2){
        printf("\n %d is the maximum number.\n", *ptr1);
    } else {
        printf("\n %d is the maximum number.\n", *ptr2);
    }

    return 0;
}