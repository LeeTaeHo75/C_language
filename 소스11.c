#include <stdio.h>

void set_max_ptr(int arr[], int size, int **pmax) {
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    *pmax = &arr[max_index];
}

int main() {
    int m[7] = {10, 30, 20, 50, 70, 90, 40};
    int *pmax;

    set_max_ptr(m, 7, &pmax);

    printf("가장 큰 값: %d\n", *pmax);

    return 0;
}