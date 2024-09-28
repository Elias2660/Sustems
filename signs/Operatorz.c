#include <stdio.h>

int main() {
    // simple operations
    int a = 0;
    int b = 10;
    a += b; 
    printf("a += b: %d\n", a);

    unsigned int c = 4294967295;
    printf("unsigned int c: %u\n", c);


    long long d = 124309;
    double  g = 1343234;
    unsigned long long e = 123123123123123123;
    short x = 123;

    printf("Size of d: %lu \n", sizeof(d));
    printf("Size of g: %lu\n", sizeof(g));
    printf("Size of x: %lu\n", sizeof(x));
    printf("Size of e: %lu\n", sizeof(e));
    return 0;
}