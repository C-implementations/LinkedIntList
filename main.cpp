#include <iostream>
#include "linkedintlist.h"

int main()
{
    LinkedIntList* list = new LinkedIntList();

    for (int i = 0; i < 2; ++i) {
        list->push_front(9);
        list->push_front(10);
    }

    for (int i = 0; i < 10; ++i) {
        list->push_back(i);
    }

    list->printElements();
}
