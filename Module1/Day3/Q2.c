#include <stdio.h>

void printBits(unsigned int num) {
    int i;

    for (i = 31; i >= 0; i--) {
        unsigned int bit = (num >> i) & 1;
        printf("%u", bit);
    }

    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Binary representation: ");
    printBits(num);

    return 0;
}
