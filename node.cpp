#include "node.h"

using namespace std;

Node::Node() {
	_value = 0;
	_prev = nullptr;
	_next = nullptr;
}

int Node::getValue() const {
	return _value;
}

Node* Node::getNext() {
	return _next;
}

Node* Node::getPrev() {
	return _prev;
}

void Node::setValue(int value) {
    _value = value;
}

void Node::setNext(Node* next) {
    _next = next;
}

void Node::setPrev(Node *prev) {
    _prev = prev;
}

bool Node::hasNext() {
    return _next != nullptr;
}