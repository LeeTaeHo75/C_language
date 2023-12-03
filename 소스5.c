#include <stdio.h>

int array_sum(int *A, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += A[i];
    }
    return sum;
}

int main() {
    int salaries[] = {3000, 4000, 2500, 3500};
    int total_salary = array_sum(salaries, sizeof(salaries) / sizeof(salaries[0]));
    printf("이번 달 회사에서 지급할 월급의 총액: %d\n", total_salary);

    return 0;
}
