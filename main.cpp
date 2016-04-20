#include "lib/stack.h"
#include "lib/queue.h"
#include "lib/linkedlist.h"

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

void linkedListDemo () {
    LinkedList *linkedList = new LinkedList();
    linkedList->insert(2);
    linkedList->insert(5);
    linkedList->insert(8);
    linkedList->insert(6);
    linkedList->insert(4);
    linkedList->insert(3);
    linkedList->insert(7);
    linkedList->remove(2);
    linkedList->remove(5);
    linkedList->remove(7);
    linkedList->remove(8);
    linkedList->printLinkedList();
}

int main () {
    stackDemo();
    queueDemo();
    linkedListDemo();
}

