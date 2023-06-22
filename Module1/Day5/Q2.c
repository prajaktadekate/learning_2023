#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

// Function to read a complex number
void readComplex(struct Complex* c) {
    printf("Enter real part: ");
    scanf("%f", &(c->real));

    printf("Enter imaginary part: ");
    scanf("%f", &(c->imaginary));
}

// Function to write a complex number
void writeComplex(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter first complex number:\n");
    readComplex(&num1);

    printf("\nEnter second complex number:\n");
    readComplex(&num2);

    printf("\n");

    writeComplex(num1);
    writeComplex(num2);

    sum = addComplex(num1, num2);
    product = multiplyComplex(num1, num2);

    printf("\nSum of the two complex numbers:\n");
    writeComplex(sum);

    printf("Product of the two complex numbers:\n");
    writeComplex(product);

    return 0;
}
