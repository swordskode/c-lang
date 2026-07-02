#include <stdio.h>

int main(void) {

    int numbers[] = {10, 20, 30, 40, 50};

    int *p = numbers;

    printf("numbers[0]  = %d\n", numbers[0]);
    printf("*p          = %d\n", *p);

    printf("\n");

    printf("numbers[1]  = %d\n", numbers[1]);
    printf("*(p + 1)    = %d\n", *(p + 1));

    printf("\n");

    printf("numbers[2]  = %d\n", numbers[2]);
    printf("*(p + 2)    = %d\n", *(p + 2));

    return 0;
}
