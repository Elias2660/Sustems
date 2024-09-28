#include <stdio.h>

/*
! This is an example of printing different character types in C

*/

int main() {
    int t = 420;
    printf("This is a number: %d\n", t);

    long long x = 1000000000000000000;
    printf("This is a big number: %lld\n", x);

    float b = 3.14;
    printf("This is a float number: %f\n", b);

    double c = 3.14159265358979323846;
    printf("This is a double number: %lf\n", c);

    char d = 'a';
    printf("This is a character: %c\n", d);

    char* g = "Hello, World!";
    printf("This is a string: %s\n", g);

    double* e = &c;
    printf("This is a pointer: %p\n", e);

    return 0;

}