#include <stdio.h>

/**
 * Write a program in C to add numbers using call by reference.
 * @return 0
 */

long addTwoNumbers(long *n1, long *n2){
    long sum;
    sum = *n1 + *n2;
    return sum;
}

int main(){

    long one, two, sum;

    printf("Pointer : Add two numbers using call by reference :\n");
    printf("-----------------------------------------------------");

    printf("\n Input the first number : ");
    scanf("%ld", &one); // %ld for long

    printf(" Input the second number : ");
    scanf("%ld", &two);

    sum = addTwoNumbers(&one, &two);

    printf("\n The sum of %ld and %ld is %ld\n\n", one, two, sum);

    return 0;
}