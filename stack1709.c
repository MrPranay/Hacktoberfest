#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
struct Stack {
	int top;
	int n;
	int* array;
};

// function to create a stack of given capacity. It initializes size of
struct Stack* createStack(int n)
{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->n = n;
	stack->top = -1;
	stack->array = (int*)malloc(stack->n * sizeof(int));
	return stack;
}

// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{
	return stack->top == stack->n - 1;
}

// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{
	return stack->top == -1;
}

// Function to add an item to stack. It increases top by 1
int push(struct Stack* stack, int item)
{
	if (isFull(stack))
		return;
	stack->array[++stack->top] = item;
    return item;
	//printf("%d pushed to stack\n", item);
}
//printf

// Function to remove an item from stack. It decreases top by 1
int pop(struct Stack* stack)
{
	if (isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top--];
}

// Function to return the top from stack without removing it
int peek(struct Stack* stack)
{
	if (isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top];
}

/*int count(struct Stack* stack){
    int cou=0;
    for (int i=0;i<n;i++){
        cou++;
    }
    return cou;
}*/

void print(struct Stack* stack){
    for (int i=0;i<101;i++){
        printf("%d Pushed to stack", push(stack,a));
    }
    
}
// Driver program to test above functions
int main()
{
	struct Stack* stack = createStack(100);


	printf("%d popped from stack\n", pop(stack));

	return 0;
}
