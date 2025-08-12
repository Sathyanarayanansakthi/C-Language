#include <stdio.h>

int main() {
    int age;
    float gpa;
    char grade;
    char name[50];  // String to store the name (max 49 chars + null terminator)

    // Read an integer
    printf("Enter your age: ");
    scanf("%d", &age);

    // Read a float
    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    // Read a single character
    printf("Enter your grade (single character): ");
    // Add a space before %c to consume any leftover newline character
    scanf(" %c", &grade);

    // Read a string (no spaces)
    printf("Enter your name: ");
    scanf("%s", name);

    // Print all the values
    printf("\nSummary:\n");
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    return 0;
}
