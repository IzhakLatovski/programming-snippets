// C implementation of stack data structure (LIFO), using array.
// The stack holds positive integers as items.

#define STACK_BOUNDARY_ERROR 0

#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    unsigned int* array;
    unsigned int capacity;
    unsigned int size;
} Stack;

Stack* createStack(unsigned int requiredCapacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = requiredCapacity;
    stack->size = 0;
    stack->array = (unsigned int*)malloc(sizeof(unsigned int) * requiredCapacity);

    return stack;
}

int stackIsFull(Stack* stack) {
    return (stack->size == stack->capacity);
}

int stackIsEmpty(Stack* stack) {
    return (stack->size == 0);
}

unsigned int getTop(Stack* stack) {
    if (stackIsEmpty(stack)) {
        printf("Can't get item on top, stack is empty.\n");       
        return STACK_BOUNDARY_ERROR;
    }

    return stack->array[stack->size - 1];
}

unsigned int pop(Stack* stack) {
    if (stackIsEmpty(stack)) {
        printf("Can't pop, stack is empty.\n");       
        return STACK_BOUNDARY_ERROR;
    }
    stack->size--;

    printf("%u has been popped.\n",stack->array[stack->size]);
    return stack->array[stack->size];
}

void push(Stack* stack, unsigned int item) {
    if (stackIsFull(stack)) {
        printf("Can't push, stack is full\n");
        return;
    }
    stack->size++;
    stack->array[stack->size - 1] = item;
    printf("%u has been pushed.\n",item);
}

unsigned int getStackCapacity(Stack* stack) {
    return stack->capacity;
}

unsigned int getStackSize(Stack* stack) {
    return stack->size;
}

void printStack(Stack* stack) {
    int i;
    for(i=stack->size ; i>0 ; i--) {
        printf("| %u\n",stack->array[i-1]);
        printf("|_______\n");
    }
}


void printMenu(void) {
    printf("\nPlease choose an option\n");
    printf("----------------------------\n");
    printf("1. Print the stack\n");
    printf("2. Push new item to the top\n");
    printf("3. Pop item from the top\n");
    printf("4. Get the item on the top\n");
    printf("5. Get the current stack size\n");
    printf("6. Get capacity of the stack\n");
    printf("7. Check if stack is empty\n");
    printf("8. Check if stack is full\n");
    printf("9. Exit\n");
}

int main() {
    unsigned int size, choose, item;
    
    printf("Hi. Please enter size of stack to be created.\n");
    scanf("%u",&size);
    
    Stack* stack = createStack(size);
    
    while(1) {
        printMenu();
        scanf("%d",&choose);
        switch(choose) {
            case 1:
                printStack(stack);
                break;
            case 2:
                printf("Enter item to be pushed (positive integer).\n");
                scanf("%u",&item);
                push(stack,item);
                break;    
            case 3:
                pop(stack);
                break;
            case 4:
                if(getTop(stack)) {
                    printf("Item on top of the stack is %u.\n",getTop(stack));
                }
                break;
            case 5:
                printf("The current stack has %u items.\n",getStackSize(stack));
                break;
            case 6:
                printf("The capacity of the stack is %u.\n",getStackCapacity(stack));
                break;
            case 7:
                if(stackIsEmpty(stack)) {
                    printf("The stack is empty.\n");
                    break;
                } else {
                    printf("The stack is not empty.\n");
                    break;
                }
            case 8:
                if(stackIsFull(stack)) {
                    printf("The stack is full.\n");
                    break;
                } else {
                    printf("The stack is not full.\n");
                    break;
                }
            case 9:
                free(stack->array);
                free(stack);
                return 0;
        }
    }   

    return 0;
}
