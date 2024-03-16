#ifndef LINKED_INT_LIST_H
#define LINKED_INT_LIST_H

#include "node.h"

class LinkedIntList {
private:
    int _actualSize = 0;
	Node* _data = nullptr;

    int getActualSize() const;
public:
	LinkedIntList(); 
    ~LinkedIntList();

	void printElements();
    void push_back(int element);
    void push_front(int element);
    bool isEmpty() const;
};

#endif