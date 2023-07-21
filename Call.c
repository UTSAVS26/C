#include <stdio.h>

void callByValue(int x);
void callByReference(int *x);

int main() {
    int num = 5;

    printf("Original value: %d\n", num);

    callByValue(num);
    printf("After call by value: %d\n", num);

    callByReference(&num);
    printf("After call by reference: %d\n", num);

    return 0;
}

void callByValue(int x) {
    x += 10;
    printf("Inside call by value: %d\n", x);
}

void callByReference(int *x) {
    *x += 10;
    printf("Inside call by reference: %d\n", *x);
}

