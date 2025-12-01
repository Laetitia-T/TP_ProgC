#include <stdio.h>
#include <string.h>

int main() {
    int a = 16;
    int b = 3;

    for (int i = 0; i != 10; i++) {
        printf("a + b = %d\n", a + b);
        printf("a - b = %d\n", a - b);
        printf("a * b = %d\n", a * b);
        printf("a / b = %d\n", a / b);
        printf("a %% b = %d\n", a % b);
        printf("a == b = %d\n", a == b);
        printf("a > b = %d\n", a > b);
    }
}
