#ifndef QUEUE_H
#define QUEUE_H

#include "element.h"
#include <stdio.h>

class Queue {
    private:
        Element *front;
        Element *last;

    public:
        Queue () {
            this->front = NULL;
            this->last  = NULL;
        }

        void enqueue (int number) {
            Element *front = new Element(number);
            if (this->front == NULL) {
                this->front = front;
                this->last  = front;
            } else {
                this->last->setNext(front);
                this->last = front;
            }
        }

        int dequeue () {
            int number;

            if (this->front == NULL) {
                printf("Queue underflow.\n");
                return 0;
            }

            this->front = this->front->getNext();

            return number;
        }

        void printQueue () {
            Element *temp = front;

            if (temp == NULL) {
                printf("No items in the queue\n");
                return;
            }

            while (temp != NULL) {
                printf("%d ", temp->getNumber());
                temp = temp->getNext();
            }

            printf("\n");
        }
};

#endif QUEUE_H

