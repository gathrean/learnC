#include <stdio.h>

/**
 * Write a program in C to demonstrate how to handle the pointers in the program.
 *
 * @return
 */
int main(){

    /**
     * %p for pointers
     * %d for digits
     */
    int* ab;
    int m = 29;

    printf("\n\n Address of m : %p", &m);
    printf("\n Value of m : %d", m);

    ab = &m;

    printf("\n\n Now ab is assigned with the address of m.");
    printf("\n Address of pointer ab : %p", ab);
    printf("\n Content of pointer ab : %d", *ab);

    m = 34;

    printf("\n\n The value of m assigned to 34 now.");
    printf("\n Address of pointer ab : %p", &ab);
    printf("\n Content of pointer ab : %d", *ab);

    m = 7;

    printf("\n\n The pointer variable ab is assigned with the value 7 now.");
    printf("\n Address of m : %p", &ab);
    printf("\n Value of m : %d", *ab);

    return 0;
}