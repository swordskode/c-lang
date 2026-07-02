#include <stdio.h>

struct Person {
    char initial;
    int age;
    double height;
};

int main(void) {
    struct Person person;

    person.initial = 'D';
    person.age = 35;
    person.height = 1.82;

    printf("Initial: %c\n", person.initial);
    printf("Age: %d\n", person.age);
    printf("Height: %.2f\n", person.height);

    return 0;
}
