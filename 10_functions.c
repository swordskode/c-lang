#include <stdio.h>

void say_hello(void) {
    printf("Hello!\n");
}

void say_goodbye(void) {
    printf("Goodbye!\n");
}

int main(void) {
    say_hello();
    say_goodbye();

    return 0;
}
