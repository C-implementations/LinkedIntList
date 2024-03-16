#ifndef NODE_H
#define NODE_H

class Node {
private:
	int _value;
	Node* _next;
	Node* _prev;

public:
	Node();

	int getValue() const;
	Node* getNext();
	Node* getPrev();
    void setValue(int value);
    void setNext(Node* next);
    void setPrev(Node* prev);
    bool hasNext();
};

#endif