#include <stdio.h>

void get_int(int *px, int *py) {
    printf("두 정수를 입력하세요: ");
    scanf_s("%d %d", px, py);
}

int main() {
    int x, y;
    get_int(&x, &y);
    printf("입력된 정수: %d, %d\n", x, y);
    
    return 0;
}