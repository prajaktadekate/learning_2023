#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    
    // Convert the number to a string
    char str[5];
    sprintf(str, "%d", num);
    
    // Try deleting each digit and find the largest number
    for (int i = 0; i < 4; i++) {
        char temp[5];
        int index = 0;
        
        // Construct a new number by excluding the current digit
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                temp[index++] = str[j];
            }
        }
        temp[index] = '\0';
        
        // Convert the new number back to integer
        int newNum = atoi(temp);
        
        // Update the largest number if the new number is larger
        if (newNum > largest) {
            largest = newNum;
        }
    }
    
    return largest;
}

int main() {
    int num1 = 5872;
    int largest1 = findLargestNumber(num1);
    printf("Largest number after deleting a digit in %d: %03d\n", num1, largest1);
    
    int num2 = 9856;
    int largest2 = findLargestNumber(num2);
    printf("Largest number after deleting a digit in %d: %03d\n", num2, largest2);
    
    return 0;
}
