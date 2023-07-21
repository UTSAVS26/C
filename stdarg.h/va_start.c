#include <stdarg.h>
#include <stdio.h>

void printNumbers(int num, ...) {
    va_list arguments;
    va_start(arguments, num);
    int i;

    for (i = 0; i < num; i++) {
        int arg = va_arg(arguments, int);
        printf("%d ", arg);
    }

    va_end(arguments);
}

int main() {
    printNumbers(4, 1, 2, 3, 4);
    return 0;
}








