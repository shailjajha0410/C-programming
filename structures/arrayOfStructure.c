#include <stdio.h>
#include <string.h>
int main(){ 

    typedef struct Student {
    int roll_no;
    char name[50];
    float marks;
} Student;

int i, n;

printf("Enter number of students: ");
scanf("%d", &n);

Student s[n]; // Array of structure

    // Input student details 
    for ( i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
