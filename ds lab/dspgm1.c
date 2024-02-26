#include <stdio.h>
#define MAX_SIZE 100
typedef struct {
 int data[MAX_SIZE];
 int top;
} Stack;
void initStack(Stack *s) {
 s->top = -1;
}
int isEmpty(Stack *s) {
 return (s->top == -1);
}
int isFull(Stack *s) {
 return (s->top == MAX_SIZE - 1);
}
void push(Stack *s, int item) {
 if (isFull(s)) {
 printf("Stack overflow!\n");
 return;
 }
 s->data[++s->top] = item;
}
int pop(Stack *s) {
 if (isEmpty(s)) {
 printf("Stack underflow!\n");
 return -1;
 }
 return s->data[s->top--];
}
int main() {
 Stack s;
 initStack(&s);
 push(&s, 1);
 push(&s, 2);
 push(&s, 3);
 printf("%d\n", pop(&s)); // Output: 3
 printf("%d\n", pop(&s)); // Output: 2
 printf("%d\n", pop(&s)); // Output: 1
 return 0;
}
