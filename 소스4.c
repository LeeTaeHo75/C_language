#include <stdio.h>

void array_copy(int A[], int B[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        B[i] = A[i];
    }
}

int main() {
    int arrayA[] = {1, 2, 3, 4, 5};
    int arrayB[5]; // B 배열의 크기는 A 배열과 동일하게 설정

    int SIZE = sizeof(arrayA) / sizeof(arrayA[0]);

    array_copy(arrayA, arrayB, SIZE);

    printf("Array A: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arrayA[i]);
    }

    printf("\nArray B (Copied from A): ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arrayB[i]);
    }

    return 0;
}
