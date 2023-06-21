#include <stdio.h>

int findBigUsingIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int findBigUsingTernaryOperator(int num1, int num2) {
    int big = (num1 > num2) ? num1 : num2;
    return big;
}

int main() {
    int num1 = 32;
    int num2 = 23;
    
    int big1 = findBigUsingIfElse(num1, num2);
    int big2 = findBigUsingTernaryOperator(num1, num2);
    
    printf("Big using if-else: %d\n", big1);
    printf("Big using ternary operator: %d\n", big2);
    
    return 0;
}
