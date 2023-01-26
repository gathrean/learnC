#include <stdio.h>

/**
 * 7. Write a program in C to store n elements
 * in an array and print the elements using a pointer.
 *
 * @return 0 int
 */
int main() {

    int arr1[25], n;

    printf("Pointer : Store and retrieve elements from an array :");
    printf("\n-------------------------------------------------------\n");

    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);

    printf("Input the &d number of elements in the array :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", arr1+i);
    }
    printf("\nThe elements you entered are : \n");
    for (int i = 0; i < n; i++) {
        printf("element - %d : %d \n", i, *(arr1+i));
    }

    return 0;
}

