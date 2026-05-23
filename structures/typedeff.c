#include<stdio.h>
//typedef float wholeNumber;
// int main(){
  //  int x;
  //  wholeNumber y = 3.1415;

   // return 0;

 //}


 #include <stdio.h>
#include <string.h>

// Define structure with typedef
typedef struct Student {
    int roll_no;
    char name[50];
} Student;

int main() {
    // Now we can use 'Student' instead of 'struct Student'
    Student s1;

    s1.roll_no = 101;
    strcpy(s1.name, "Shailja");

    printf("Roll No: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);

    return 0;

}
