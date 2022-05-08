/*
Write a program to implement Euclidean and Extended Euclidean algorithms
*/
#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void main()
{
    int a = 10, b = 15, c;
    c = gcd(a, b);
    printf("The GCD of %d and %d = %d\n", a, b, c);
}