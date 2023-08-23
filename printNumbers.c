#include <stdio.h>
#include <stdarg.h>
/**
 * In this program, the printNumbers function takes an integer count as its first argument 
 * which indicates the number of integers that will follow. 
 *   
 * It then uses the va_list, va_start, and va_arg macros from stdarg.h to iterate through the variable arguments and print them. 
 * The main function demonstrates how to call print numbers with different sets of integers.
 */
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
