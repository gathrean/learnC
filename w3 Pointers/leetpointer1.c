#include<stdio.h>

// Write a program in C to show the basic declaration of pointer.

int main(void) {
    int m = 10, n, o;
    int *z = &m;

    printf("\n\n Pointer : Show the basic declaration of point :");
    printf("\n -------------------------------------------------------");
    printf("\n Here is m = 10, n and o are two integer variable, and *z is an integer.");
    printf("\n\n z stores the address of m = %p", z);
    printf("\n\n *z stores the value of m = %i", *z);
    printf("\n\n &m is the address of m = %p", &m);
    printf("\n\n &n stores the address of n = %p", &n);
    printf("\n\n &o stores the address of o = %p", &o);
    printf("\n\n &z stores the address of z = %p", &z);

    /*
     * NOTES:
     *
     * z = a pointer so &p would print the address.
     *
     * *z = returns the value of the address that z is pointing towards.
     *
     * &m = returns the address of the integer variable m.
     *
     * &o = returns the address of the integer variable o.
     *
     * &z = returns the address of the integer variable z,
     * where the point z is stored -> still an address -> &p is the right specifier.
     * */

    return 0;
}
