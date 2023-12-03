#include <stdio.h>

struct point {
    int x;
    int y;
};

int equal(struct point *p1, struct point *p2) {
    return (p1->x == p2->x && p1->y == p2->y);
}

int main() {
    struct point point1 = {1, 2};
    struct point point2 = {1, 2};

    if (equal(&point1, &point2))
        printf("두 점은 일치합니다.\n");
    else
        printf("두 점은 일치하지 않습니다.\n");

    return 0;
}