#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    // Create temporary buffers
    char* temp_a = (char*)malloc(size);
    char* temp_b = (char*)malloc(size);
    
    // Copy the value of 'a' to the temporary buffer
    memcpy(temp_a, a, size);
    
    // Copy the value of 'b' to the temporary buffer
    memcpy(temp_b, b, size);
    
    // Copy the value from the temporary buffer to 'a'
    memcpy(a, temp_b, size);
    
    // Copy the value from the temporary buffer to 'b'
    memcpy(b, temp_a, size);
    
    // Free the temporary buffers
    free(temp_a);
    free(temp_b);
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    
    // Swap the values of num1 and num2
    swap(&num1, &num2, sizeof(int));
    
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    
    double val1 = 3.14, val2 = 2.71;
    printf("Before swap: val1 = %lf, val2 = %lf\n", val1, val2);
    
    // Swap the values of val1 and val2
    swap(&val1, &val2, sizeof(double));
    
    printf("After swap: val1 = %lf, val2 = %lf\n", val1, val2);
    
    return 0;
}
