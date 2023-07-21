#include <stdarg.h>
#include <stdio.h>

void printStrings(int num, ...) {
    va_list arguments;
    va_start(arguments, num);
    int i;

    for (i = 0; i < num; i++) {
        char* str = va_arg(arguments, char*);
        printf("%s ", str);
    }

    va_end(arguments);
}

int main() {
    printStrings(3, "Hello", "World");
    return 0;
}


