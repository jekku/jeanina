#include "lib/element.h"
#include "lib/stack.h"
#include "lib/queue.h"

void stackDemo () {
    int i = 0;
    Stack *stack = new Stack();

    stack->printStack();

    for (i = 0 ; i < 10 ; i ++ ) {
        stack->push(i);
        stack->printStack();
    }

    for (i = 0 ; i < 10 ; i ++ ) {
        stack->pop();
        stack->printStack();
    }

    stack->pop();
}

void queueDemo () {
    int i = 0;

    Queue *queue = new Queue();

    for (i = 0 ; i < 10 ; i ++ ) {
        queue->printQueue();
        queue->enqueue(i);
    }

    queue->printQueue();

    for (i = 0 ; i < 10 ; i ++ ) {
        queue->printQueue();
        queue->dequeue();
    }

    queue->dequeue();
}

int main () {
    stackDemo();
    queueDemo();
}

