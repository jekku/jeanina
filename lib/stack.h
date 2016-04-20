#ifndef STACK_H
#define STACK_H

#include "element.h"
#include <stdio.h>

class Stack {
    private:
        Element *top;

    public:
        Stack () {
            this->top = NULL;
        }

        void push (int number) {
            Element *top = new Element(number);
            if (this->top == NULL) {
                this->top = top;
            } else {
                top->setNext(this->top);
                this->top = top;
            }
        }

        int pop () {
            int number;

            if (this->top == NULL) {
                printf("Stack underflow.\n");
                return 0;
            }

            number = this->top->getNumber();
            this->top = this->top->getNext();

            return number;
        }

        void printStack () {
            Element *temp = top;

            if (temp == NULL) {
                printf("No items in the stack\n");
                return;
            }

            while (temp != NULL) {
                printf("%d ", temp->getNumber());
                temp = temp->getNext();
            }

            printf("\n");
        }
};

#endif STACK_H

