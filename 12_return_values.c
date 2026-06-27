#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int square(int number) {
    return number * number;
}

int main(void) {
    int result1 = add(10, 20);
    int result2 = square(5);

    printf("10 + 20 = %d\n", result1);
    printf("5^2 = %d\n", result2);

    return 0;
}
