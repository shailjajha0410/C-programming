#include <stdio.h>
#include <string.h>

struct Student {  // user defined datatype
    int roll_no;
    char name[50];
    float marks;
};

int main(){

struct Student s1;
s1.roll_no = 10;
strcpy(s1.name, "Shailja");  // use strcpy for strings
s1.marks = 99;
printf("%d", s1.roll_no);
return 0;

}
