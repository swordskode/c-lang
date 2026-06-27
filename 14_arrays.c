#include <stddef.h>
#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};

    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    for (size_t i = 0; i < length; i++) {
        printf("numbers[%zu] = %d\n", i, numbers[i]);
    }

    return 0;
}
