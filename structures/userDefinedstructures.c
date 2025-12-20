#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter roll number: ");    // Input values
    scanf("%d", &s1.roll_no);
    
    return 0;
}