#include <stdio.h> // Standard I/O

int main() {  // Main Function

    int age = 25;
    printf("You are %d years old", age);   // %d prints int

    float gpa = 2.5;
    printf("\nYour GPA is %.2f", gpa); // %.2f = float with 2 decimals

    char grade = 'f'; // single character
    printf("\nYour grade is %c", grade); // %c prints char

    char name[] = "Sathya"; // String in C
    printf("\nYour Name: %s", name); // %s prints string

    return 0; // Program ended successfully
}
