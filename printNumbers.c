#include <stdio.h>
#include <stdarg.h>

void printNumbers(int count, ...) {
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        printf("%d ", num);
    }

    va_end(args);
    printf("\n");
}

int main() {
    printNumbers(5, 1, 2, 3, 4, 5);
    printNumbers(3, 10, 20, 30);
    return 0;
}
