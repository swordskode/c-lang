#include <stdio.h>

int global_number = 100;

void print_global(void) {
    printf("global_number inside function: %d\n", global_number);
}

void local_example(void) {
    int local_number = 10;

    printf("local_number inside function: %d\n", local_number);
}

int main(void) {
    int x = 5;

    printf("x inside main: %d\n", x);

    local_example();
    print_global();

    if (x > 0) {
        int block_number = 42;
        printf("block_number inside if block: %d\n", block_number);
    }

    return 0;
}
