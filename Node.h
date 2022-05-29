#ifndef _NODE_H
#define _NODE_H

template<class type>
class Node{

public:
	Node();
	void setData(type data);
	void setNext(Node* next);
	type getData() const;
	Node* getNext() const;

private:
	type data;
	Node* next;
};

template<class type>
Node<type>::Node() {
	this->next = nullptr;
}

template<class type>
void Node<type>::setData(type data) {
	this->data = data;
}

template<class type>
void Node<type>::setNext(Node* next) {
	this->next = next;
}

template<class type>
type Node<type>::getData() const {
	return data;
}

template<class type>
Node<type>* Node<type>::getNext() const {
	return next;
}

#endif
