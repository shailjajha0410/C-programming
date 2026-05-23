#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL; 

struct Node* createNode(int value) {
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    if (!n) return NULL;
    n->data = value;
    n->next = NULL;
    return n;
}

void insertPQ(int value) {
    struct Node *newNode = createNode(value);
    if (newNode == NULL) { printf("Memory allocation failed.\n"); return; }

    if (head == NULL || head->data < value) {
        newNode->next = head;
        head = newNode;
        printf("%d inserted into priority queue.\n", value);
        return;
    }

    struct Node *curr = head;
    while (curr->next != NULL && curr->next->data >= value)
        curr = curr->next;

    newNode->next = curr->next;
    curr->next = newNode;
    printf("%d inserted into priority queue.\n", value);
}

void extractMax() {
    if (head == NULL) {
        printf("Priority Queue is empty.\n");
        return;
    }
    struct Node *temp = head;
    head = head->next;
    printf("Extracted (max): %d\n", temp->data);
    free(temp);
}

void peekMax() {
    if (head == NULL) { printf("Priority Queue is empty.\n"); return; }
    printf("Max element: %d\n", head->data);
}

void displayList() {
    if (head == NULL) { printf("Priority Queue is empty.\n"); return; }
    struct Node *t = head;
    printf("Priority Queue (high -> low): ");
    while (t) { printf("%d ", t->data); t = t->next; }
    printf("\n");
}

int main() {
    int choice, val;
    while (1) {
        printf("\n--- Priority Queue (Sorted Linked List) ---\n");
        printf("1. Insert (enqueue)\n");
        printf("2. Extract Max (dequeue)\n");
        printf("3. Peek Max\n");
        printf("4. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) { int c; while ((c=getchar())!=EOF && c!='\n'); printf("Invalid.\n"); continue; }

        if (choice == 1) {
            printf("Enter value to insert: ");
            if (scanf("%d", &val) != 1) { int c; while ((c=getchar())!=EOF && c!='\n'); printf("Invalid value.\n"); continue; }
            insertPQ(val);
        } else if (choice == 2) {
            extractMax();
        } else if (choice == 3) {
            peekMax();
        } else if (choice == 4) {
            displayList();
        } else if (choice == 0) {
            printf("Exiting.\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;

}
