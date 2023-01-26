#include <stdio.h>

/**
 * 3. Write a program in C to demonstrate the use of &(address of) and *(value at address operator).
 *
 * @return
 */

int main(){

    int m = 300;
    double fx = 300.600006;
    char cht = 'z';

    printf("Pointer : Demonstrate the use of & and * operator : ");
    printf("\n--------------------------------------------------------");
    printf("\n\n m = 300\n fx = 300.600006\n cht = z");

    int *pt1 = &m;
    float *pt2 = &fx;
    char *pt3 = &cht;

    printf("\n\nUsing & operator : \n-----------------------");
    printf("\n address of m = %p", &m);
    printf("\n address of fx = %p", &fx);
    printf("\n address of cht = %p", &cht);

    printf("\n\nUsing & and * operator : \n-----------------------");
    printf("\n value at address of m = %d", *(&m)); // this combo gives the value at the address of m
    printf("\n value at address of fx = %f", *(&fx)); // %f for double
    printf("\n value at address of cht = %c", *(&cht)); // %c for char

    printf("\n\nUsing only pointer variable : \n-----------------------");
    printf("\n address of m = %p", &m);
    printf("\n address of fx = %p", &fx);
    printf("\n address of cht = %p", &cht);

    printf("\n\nUsing only pointer operator : \n-----------------------");
    printf("\n value at address of m = %d", *pt1);
    printf("\n value at address of fx = %f", *pt2); // supposed to say 300.600006 but output says -0.000000
    printf("\n value at address of cht = %c", *pt3);


    return 0;
}