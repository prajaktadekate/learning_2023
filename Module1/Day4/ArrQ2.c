#include <stdio.h>

int main() {
    int arr[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int len = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];

    // Calculate the minimum and maximum values
    for (int i = 1; i < len; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}
