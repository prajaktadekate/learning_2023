#include <stdio.h>

int main() {
    int rollNo;
    char name[100];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;
    
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    
    printf("Enter Name: ");
    scanf(" %[^\n]s", name); // %[^\n]s is used to read a string with spaces
    
    printf("Enter Physics Marks: ");
    scanf("%f", &physicsMarks);
    
    printf("Enter Math Marks: ");
    scanf("%f", &mathMarks);
    
    printf("Enter Chemistry Marks: ");
    scanf("%f", &chemistryMarks);
    
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300.0) * 100;
    
    printf("\n--- Summary ---\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}
