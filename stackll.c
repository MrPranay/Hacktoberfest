#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CAPACITY 10000
struct stack 
{
    int data;
    struct stack *next;
} *top;

int size = 0;


void push(int element)
{
    if (size >= CAPACITY)
    {
        printf("Stack Overflow, can't add more element to stack.\n");
        return;
    }
    struct stack * newNode = (struct stack *) malloc(sizeof(struct stack));
    newNode->data = element;
    newNode->next = top;        
    top = newNode;
    size++;

    printf("%d pushed to stack.\n",element);

    int data = 0;
    struct stack * topNode;
    if (size <= 0 || !top)
    {
        printf("Stack is empty.\n");
        return INT_MIN;
    }
    topNode = top;
    data = top->data;
    top = top->next;
    free(topNode);
    size--;

    return data;
}
//display part
void display(){
    struct stack *temp;
    if(top == NULL)
    {
        printf("Stack is empty.");
        return;
    }
    
    temp = top;
    while(temp != NULL){
        printf(" %d ", temp->data); 
        temp = temp->next;                 
    }
}
int main()
{
    push(8);
    push(9);
    push(6);
    
    pop();
    return 0;
}
