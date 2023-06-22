#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box box;
    struct Box* boxPtr = &box;

    // Accessing members using indirection operator (*) and dot operator (.)
    (*boxPtr).length = 9.0;
    (*boxPtr).width = 4.0;
    (*boxPtr).height = 2.0;

    // Accessing members using arrow operator (->) with pointer representation
    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Box with pointer representation:\n");
    printf("Length: %.2f\n", (*boxPtr).length);
    printf("Width: %.2f\n", (*boxPtr).width);
    printf("Height: %.2f\n", (*boxPtr).height);
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    // Accessing members using arrow operator (->) with dot representation
    boxPtr->length = 5.0;
    boxPtr->width = 3.0;
    boxPtr->height = 2.0;

    // Accessing members using dot operator (.) with dot representation
    volume = calculateVolume(&box);
    surfaceArea = calculateSurfaceArea(&box);

    printf("\nBox with dot representation:\n");
    printf("Length: %.2f\n", boxPtr->length);
    printf("Width: %.2f\n", boxPtr->width);
    printf("Height: %.2f\n", boxPtr->height);
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
