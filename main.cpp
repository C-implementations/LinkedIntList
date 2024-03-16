#include <iostream>
#include "linkedintlist.h"

int main()
{
    LinkedIntList* list = new LinkedIntList();

    for (int i = 0; i < 10; ++i) {
        list->addElement(i);
    }

    list->printElements();
}
