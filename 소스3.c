#include <stdio.h>

void get_diff(int a, int b, int *sum, int *diff) {
    *sum = a + b;
    *diff = a - b;
}

int main() {
    int num1 = 10, num2 = 5;
    int sum, difference;

    get_diff(num1, num2, &sum, &difference);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}