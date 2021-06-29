#include <stdio.h>

int main() {
    int m = 20;
    int n = 7;
    printf("m = %d, &m = %p\n", m, &m);
    printf("n = %d, &n = %p\n", n, &n);

    int *p1; // p1 is a pointer to int
    p1 = &m;
    printf("p1  = %p\n", p1);
    printf("*p1 = %d\n", *p1); // *p1 deferenceing

    printf("-------\n");
    m = 99;
    printf("p1  = %p\n", p1);
    printf("*p1 = %d\n", *p1); // *p1 dereferencing or indirection

    int *p2; // p2 is a pointer to int
    int *p3; // p3 is a pointer to int
    char *c1; // c1 is a pointer to char

    int price = 15;
    int *coke, *fanta, *sprite;
    coke = &price;
    fanta = &price;
    sprite = &price;
    printf("price = %d\n", price);
    printf("%d, %d, %d\n", *coke, *fanta, *sprite);
    price = 20;
    printf("%d, %d, %d\n", *coke, *fanta, *sprite);
    *fanta = 19;
    printf("price = %d\n", price);
    printf("%d, %d, %d\n", *coke, *fanta, *sprite);

    return 0;
}