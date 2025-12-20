#include <stdio.h>
#include <string.h>

// Define structure
typedef struct {
    int roll_no;
    char name[50];
    float marks;
} Student;

// Function that takes structure as argument (by value)
void display(Student s) {
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    Student s1;

    s1.roll_no = 101;
    strcpy(s1.name, "Shailja");
    s1.marks = 95.5;

    // Passing structure to function
    display(s1);

    return 0;
}
