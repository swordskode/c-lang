#include <stdio.h>

void print_number(int number) {
    printf("Number: %d\n", number);
}

void greet(char initial) {
    printf("Hello, %c!\n", initial);
}

int main(void) {
    print_number(10);
    print_number(42);
    print_number(100);

    printf("\n");

    greet('D');
    greet('A');

    return 0;
}
