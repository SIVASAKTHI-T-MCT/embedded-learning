#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define QUEUE_SIZE 5
struct queue{
    int front;
    int rear;
    int count;
    int items[QUEUE_SIZE];
};

 void queue_init(struct queue *q){
    q->front = 0;
    q->rear = -1;
    q->count = 0;
 }
 int enqueue(struct queue *q, int value){
    if(q->count == QUEUE_SIZE){
        printf("Queue is full\n");
        return -1;
    }
    q->rear = (q->rear + 1) % QUEUE_SIZE;
    q->count++;
    q->items[q->rear] = value;
    return 0;
 }
 int dequeue(struct queue *q,int *value){
    if(q->count == 0){
        printf("Queue is empty\n");
        return -1;
    }
    *value = q->items[q->front];
    q->front = (q->front + 1) % QUEUE_SIZE;
    q->count--;
    return 0;
 }
 int peek(struct queue *q, int *value){
    if(q->count == 0){
        printf("Queue is empty\n");
        return -1;
    }
    *value = q->items[q->front];
    return 0;
 }
  int is_empty(struct queue *q){
    return q->count == 0;
 }
 int is_full(struct queue *q){
    return q->count == QUEUE_SIZE;
 }
int main(void)
{
    struct queue q;
    queue_init(&q);
    printf("Queue initialized\n");
    printf("Is queue empty? %d\n", is_empty(&q));
    printf("Is queue full? %d\n", is_full(&q));
    if(enqueue(&q, 1) == 0){
        printf("Enqueued value: %d\n", 1);
    }
    if(enqueue(&q, 2) == 0){
        printf("Enqueued value: %d\n", 2);
    }
    if(enqueue(&q, 3) == 0){
        printf("Enqueued value: %d\n", 3);
    }
    if(enqueue(&q, 4) == 0){
        printf("Enqueued value: %d\n", 4);
    }
    if(enqueue(&q, 5) == 0){
        printf("Enqueued value: %d\n", 5);
    }
    if(enqueue(&q, 6) == 0){
        printf("Enqueued value: %d\n", 6);
    }
    printf("Is queue empty? %d\n", is_empty(&q));
    printf("Is queue full? %d\n", is_full(&q));
    int value;
    if(dequeue(&q, &value) == 0){
        printf("Dequeued value: %d\n", value);
    }
    if(dequeue(&q, &value) == 0){
        printf("Dequeued value: %d\n", value);
    }
    if(enqueue(&q, 6) == 0){
        printf("Enqueued value: %d\n", 6);
    }
    if(enqueue(&q, 7) == 0){
        printf("Enqueued value: %d\n", 7);
    }
    printf("Dequeuing\n");
    if(dequeue(&q, &value) == 0){
        printf("Dequeued value: %d\n", value);
    }
    printf("Peeking\n");
    if(peek(&q, &value) == 0){
        printf("Peeked value: %d\n", value);
    }
    return 0;
}