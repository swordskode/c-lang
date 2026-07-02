#include <stdio.h>

int main(void) {
    int number = 42;

    int *pointer = &number;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);

    printf("\n");

    printf("Value of pointer: %p\n", (void *)pointer);
    printf("Value pointed to: %d\n", *pointer);

    return 0;
}
