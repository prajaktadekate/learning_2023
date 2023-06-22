#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapPoints(struct Point* p1, struct Point* p2) {
    struct Point temp;

    temp.x = p1->x;
    temp.y = p1->y;

    p1->x = p2->x;
    p1->y = p2->y;

    p2->x = temp.x;
    p2->y = temp.y;
}

int main() {
    struct Point point1, point2;

    // Input the values for point1
    printf("Enter the x-coordinate for point1: ");
    scanf("%d", &point1.x);

    printf("Enter the y-coordinate for point1: ");
    scanf("%d", &point1.y);

    // Input the values for point2
    printf("Enter the x-coordinate for point2: ");
    scanf("%d", &point2.x);

    printf("Enter the y-coordinate for point2: ");
    scanf("%d", &point2.y);

    printf("\nBefore swapping:\n");
    printf("Point1: (%d, %d)\n", point1.x, point1.y);
    printf("Point2: (%d, %d)\n", point2.x, point2.y);

    // Swap the fields of point1 and point2 using pointers
    swapPoints(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point1: (%d, %d)\n", point1.x, point1.y);
    printf("Point2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
