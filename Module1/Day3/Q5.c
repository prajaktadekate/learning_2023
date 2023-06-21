#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallestDigit = 9;
    int largestDigit = 0;
    int i, j;
    int valid = 1;

    for (i = 0; i < n; i++) {
        int num = numbers[i];

        while (num > 0) {
            int digit = num % 10;

            if (digit < smallestDigit)
                smallestDigit = digit;

            if (digit > largestDigit)
                largestDigit = digit;

            num /= 10;
        }

        if (numbers[i] <= 0) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Smallest digit: %d\nLargest digit: %d\n", smallestDigit, largestDigit);
    else
        printf("Not Valid\n");
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }

    int numbers[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}

