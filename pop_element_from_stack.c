#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

int main() {
    stack[++top] = 10;
    stack[++top] = 20;

    if(top == -1)
        printf("Stack Underflow");
    else
        printf("Popped element = %d", stack[top--]);

    return 0;
}
 
