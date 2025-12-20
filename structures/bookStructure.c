#include <stdio.h>
#include <string.h>

struct Book {
    char name[50];
    float price;
    int pages;
} a1,b1,c1;

int main() {
    struct Book b1;

    // Assign values
    strcpy(b1.name, "Let us C");
    b1.price = 350.50;
    b1.pages = 500;

    // Print values
    printf("Book Details:\n");
    printf("Name: %s\n", b1.name);
    printf("Price: %.2f\n", b1.price);
    printf("Pages: %d\n", b1.pages);

    return 0;
}
