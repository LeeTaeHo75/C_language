#include <stdio.h>
#include <stdlib.h>

int main() {
    char operation[4];
    int num1, num2;

    printf("연산을 입력하라: ");
    scanf_s("%s %d %d", operation, &num1, &num2);

    if (strcmp(operation, "add") == 0)
        printf("연산의 결과: %d\n", num1 + num2);
    else if (strcmp(operation, "sub") == 0)
        printf("연산의 결과: %d\n", num1 - num2);
    else if (strcmp(operation, "mul") == 0)
        printf("연산의 결과: %d\n", num1 * num2);
    else if (strcmp(operation, "div") == 0)
        printf("연산의 결과: %d\n", num1 / num2);
    else
        printf("지원하지 않는 연산입니다.\n");

    return 0;
}
