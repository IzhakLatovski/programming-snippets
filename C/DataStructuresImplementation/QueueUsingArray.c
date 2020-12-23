// C implementation of queue data structure (FIFO), using array.
// The queue holds unsigned integers as items.

#define QUEUE_BOUNDARY_ERROR 0

#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
    unsigned int* array;
    unsigned int capacity;
    unsigned int size;
    unsigned int front, rear;
} Queue;

Queue* createQueue(unsigned int requiredCapacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity = requiredCapacity;
    queue->size = 0;
    queue->array = (unsigned int*)malloc(sizeof(unsigned int) * requiredCapacity);
    queue->front = 0;
    queue->rear = requiredCapacity-1;

    return queue;
}

int queueIsFull(Queue* queue) {
    return (queue->size == queue->capacity);
}

int queueIsEmpty(Queue* queue) {
    return (queue->size == 0);
}

unsigned int front(Queue* queue) {
    if (queueIsEmpty(queue)) {
        printf("Can't get item on front, queue is empty.\n");       
        return QUEUE_BOUNDARY_ERROR;
    }

    return queue->array[queue->front];
}

unsigned int rear(Queue* queue) {
    if (queueIsEmpty(queue)) {
        printf("Can't get item on rear, queue is empty.\n");       
        return QUEUE_BOUNDARY_ERROR;
    }

    return queue->array[queue->rear];
}

unsigned int dequeue(Queue* queue) {
    unsigned int result;
    if (queueIsEmpty(queue)) {
        printf("Can't dequeue, queue is empty.\n");       
        return QUEUE_BOUNDARY_ERROR;
    }
    result=queue->array[queue->front];
    queue->front=(queue->front+1)%queue->capacity;
    queue->size--;

    printf("%u has been dequeued.\n",queue->array[queue->size]);
    return result;
}

void enqueue(Queue* queue, unsigned int item) {
    if (queueIsFull(queue)) {
        printf("Can't enqueue, queue is full\n");
        return;
    }
    queue->size++;
    queue->rear=(queue->rear+1)%queue->capacity;
    queue->array[queue->rear] = item;
    printf("%u has been enqueued.\n",item);
}

unsigned int getQueueCapacity(Queue* queue) {
    return queue->capacity;
}

unsigned int getQueueSize(Queue* queue) {
    return queue->size;
}

void printQueue(Queue* queue) {
    int i;
    printf("Front (first inserted)\n\n");
    for(i=0 ; i<queue->size ; i++) {
        printf("| %u\n",queue->array[(queue->front+i)%queue->capacity]);
        printf("|\n");
    }
    printf("Rear (last inserted)\n");
}


void printMenu(void) {
    printf("\nPlease choose an option\n");
    printf("----------------------------\n");
    printf("1. Print the queue\n");
    printf("2. Enqueue new item to the queue\n");
    printf("3. Dequeue item from the queue\n");
    printf("4. Get the item on the front\n");
    printf("5. Get the item on the rear\n");
    printf("6. Get the current queue size\n");
    printf("7. Get capacity of the queue\n");
    printf("8. Check if queue is empty\n");
    printf("9. Check if queue is full\n");
    printf("10. Exit\n");
}

int main() {
    unsigned int size, choose, item;
    
    printf("Hi. Please enter size of queue to be created.\n");
    scanf("%u",&size);
    
    Queue* queue = createQueue(size);
    
    while(1) {
        printMenu();
        scanf("%d",&choose);
        switch(choose) {
            case 1:
                printQueue(queue);
                break;
            case 2:
                printf("Enter item to be enqueued (positive integer).\n");
                scanf("%u",&item);
                enqueue(queue,item);
                break;    
            case 3:
                dequeue(queue);
                break;
            case 4:
                if(front(queue)) {
                    printf("Item on front of the queue is %u.\n",front(queue));
                }
                break;
            case 5:
                if(rear(queue)) {
                    printf("Item on rear of the queue is %u.\n",rear(queue));
                }
                break;
            case 6:
                printf("The current queue has %u items.\n",getQueueSize(queue));
                break;
            case 7:
                printf("The capacity of the queue is %u.\n",getQueueCapacity(queue));
                break;
            case 8:
                if(queueIsEmpty(queue)) {
                    printf("The queue is empty.\n");
                    break;
                } else {
                    printf("The queue is not empty.\n");
                    break;
                }
            case 9:
                if(queueIsFull(queue)) {
                    printf("The queue is full.\n");
                    break;
                } else {
                    printf("The queue is not full.\n");
                    break;
                }
            case 10:
                free(queue->array);
                free(queue);
                return 0;
        }
    }   

    return 0;
}
