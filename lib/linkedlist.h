#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "element.h"
#include <stdio.h>

class LinkedList {
    private:
        Element *root;
        Element *tail;

    public:
        LinkedList () {
            this->root = NULL;
            this->tail = NULL;
        }

        void insert (int number) {
            Element *newElement = new Element(number);
            Element *root       = this->root;
            Element *tail       = this->tail;

            if (root == NULL) {
                this->root = newElement;
                this->tail = newElement;
            } else if (tail->getNumber() <= number) {
                this->tail->setNext(newElement);
                this->tail = newElement;
            } else {
                while (root->getNext()->getNumber() < number) {
                    root = root->getNext();
                }

                newElement->setNext(root->getNext());
                root->setNext(newElement);
            }
        }


        void remove (int number) {
            Element *root = this->root;
            Element *back = root;

            if (root == NULL) {
                printf("Nothing to delete...\n");
                return;
            }

            if (root->getNumber() == number) {
                this->root = this->root->getNext();
            }

            while (root->getNumber() != number) {
                back = root;
                root = root->getNext();

                if (root == NULL) {
                    printf("Not found...\n");
                    return;
                }
            }

            back->setNext(root->getNext());
        }

        void printLinkedList () {
            Element *iterator = this->root;

            if (iterator == NULL) {
                printf("Nothing here...\n");
                return;
            }

            while (iterator != NULL) {
                printf("%d ", iterator->getNumber());
                iterator = iterator->getNext();
            }

            printf("\n");
        }
};

#endif

