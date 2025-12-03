// Insert Node at the Beginning of a Singly Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));
    struct Node* newelement = malloc(sizeof(struct Node));
    struct Node* temp;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;   

    third->data = 30;
    third->next = NULL;

    printf("Enter an element to add at the beginning: ");
    scanf("%d", &newelement->data);

    newelement->next = head;  
    head = newelement;        

    printf("Linked list is: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}

