#include <stdarg.h>
#include <stdio.h>

int sumNumbers(int count, ...) {
    va_list arguments;
    va_start(arguments, count);

    int sum = 0;
    int i;
    for (i = 0; i < count; i++) {
        int num = va_arg(arguments, int);
        sum += num;
    }

    va_end(arguments);
    return sum;
}

int main() {
    int total = sumNumbers(5, 1, 2, 3, 4, 5);
    printf("Sum: %d\n", total);
    return 0;
}


