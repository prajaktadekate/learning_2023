#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    int diff = sumEven - sumOdd;
    
    printf("Sum of Even Elements: %d\n",sumEven);
    printf("Sum of Odd Elements: %d\n",sumOdd);
    printf("Difference between the sum of even elements and the sum of odd elements: %d\n", diff);

    return 0;
}
