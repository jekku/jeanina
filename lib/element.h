#ifndef ELEMENT_H
#define ELEMENT_H

#include <stdlib.h>

class Element {
    private:
        int number;
        Element *next;

    public:
        Element (int number) {
           this->number = number;
           this->next   = NULL;
        }

        int getNumber () {
            return this->number;
        }

        void setNext (Element *next) {
            this->next = next;
        }

        Element *getNext () {
            return this->next;
        }
};

#endif ELEMENT_H

