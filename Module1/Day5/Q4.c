#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    struct Student* students;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n student structures
    students = (struct Student*)malloc(n * sizeof(struct Student));

    // Input data for each student
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &(students + i)->rollNumber);

        printf("Enter Name: ");
        scanf(" %[^\n]s", (students + i)->name);

        printf("Enter Marks: ");
        scanf("%f", &(students + i)->marks);
    }

    // Display the data for each student
    printf("\nStudent Data:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", (students + i)->rollNumber);
        printf("Name: %s\n", (students + i)->name);
        printf("Marks: %.2f\n", (students + i)->marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}
