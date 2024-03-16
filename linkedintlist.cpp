#include <iostream>
#include <stdlib.h>
#include "linkedintlist.h"
#include "node.h"

using namespace std;

LinkedIntList::LinkedIntList() {
    _actualSize = 0;
}

LinkedIntList::~LinkedIntList() {
    Node* elementPointer = _data;
    while ((elementPointer->getNext()) != nullptr) {
        free(elementPointer->getPrev());
        elementPointer = elementPointer->getNext();
    }
}

int LinkedIntList::getActualSize() const {
    return _actualSize;
}

void LinkedIntList::printElements() {
	Node* elementPointer = _data;

    if (LinkedIntList::getActualSize() == 0) {
        cout << elementPointer->getValue() << endl;
        return;
    }

    do {
        cout << elementPointer->getValue() << endl;
        elementPointer = elementPointer->getNext();
    } while (elementPointer != nullptr);
}

bool LinkedIntList::isEmpty() const {
    return _actualSize == 0;
}

void LinkedIntList::push_back(int element) {
    if (LinkedIntList::getActualSize() == 0) {
        _data = new Node();
        _data->setValue(element);
        _data->setPrev(nullptr);
        _data->setNext(nullptr);
        _actualSize++;
        return;
    }

    Node* elementPointer = _data;
    while (elementPointer->hasNext()) {
        elementPointer = elementPointer->getNext();
    }

    Node* newNode = new Node();
    newNode->setValue(element);
    newNode->setPrev(elementPointer);
    newNode->setNext(nullptr);
    elementPointer->setNext(newNode);
    _actualSize++;
}

void LinkedIntList::push_front(int element) {
    if (LinkedIntList::getActualSize() == 0) {
        _data = new Node();
        _data->setNext(nullptr);
        _data->setPrev(nullptr);
        _data->setValue(element);
        _actualSize++;
        return;
    }

    Node* elementPointer = _data;
    Node* newNode = new Node();
    newNode->setPrev(nullptr);
    newNode->setNext(elementPointer);
    newNode->setValue(element);
    elementPointer->setPrev(newNode);
    _data = newNode;
    _actualSize++;
}