#ifndef _LINKLISTED_H
#define _LINKLISTED_H

#include "Node.h"
#include <limits>


template<class type>
class LinkedList{

public:
	LinkedList();
	LinkedList(int* arr, int size);
	~LinkedList();
	void addFront(type newItem);
	void addEnd(type newItem);
	void addAtPosition(int position, type newItem);
	int search(type item);
	void deleteFront();
	void deleteEnd();
	void deletePosition(int position);
	type getItem(int position);
	int getSize();

private:
	Node<type>* head;
};


template<class type>
LinkedList<type>::LinkedList() {
	head = nullptr;
}


template<class type>
LinkedList<type>::LinkedList(int* arr, int size) {
	if (arr == nullptr || size <= 0) {
		head = nullptr;
	}
	else {
		head = nullptr;
		for (int i = 0; i < size; i++) {
			addEnd(arr[i]);
		}
	}
}


template<class type>
LinkedList<type>::~LinkedList() {
	while (head) {
		Node<type>* node = head;
		head = head->getNext();
		delete node;
	}
}


template<class type>
void LinkedList<type>::addFront(type newItem) {
	Node<type>* newNode = new Node<type>;
	newNode->setData(newItem);
	if (head == nullptr) {
		head = newNode;
	}
	else {
		newNode->setNext(head);
		head = newNode;
	}
}


template<class type>
void LinkedList<type>::addEnd(type newItem) {
	Node<type>* newNode = new Node<type>;
	newNode->setData(newItem);
	if (head == nullptr) {
		head = newNode;
	}
	else {
		Node<type>* tail = head;
		while (tail->getNext()) {
			tail = tail->getNext();
		}
		tail->setNext(newNode);
	}
}


template<class type>
void LinkedList<type>::addAtPosition(int position, type newItem) {
	Node<type>* newNode = new Node<type>;
	newNode->setData(newItem);
	if (head == nullptr) {
		head = newNode;
	}
	else {
		if (position <= 1) {
			addFront(newItem);
		}
		else {
			Node<type>* tail = head;
			int count = 2;
			while (count < position && tail->getNext()) {
				tail = tail->getNext();
				count++;
			}
			if (tail) {
				newNode->setNext(tail->getNext());
				tail->setNext(newNode);
			}
			else {
				addEnd(newItem);
			}
		}
	}
}


template<class type>
int LinkedList<type>::search(type item){
	int count = 1;
	Node<type>* tail = head;
	while (tail) {
		if (tail->getData() == item) {
			std::cout << count << ' ';
			return count;
		}
		tail = tail->getNext();
		count++;
	}
	std::cout << 0 << ' ';
	return 0;
}


template<class type>
void LinkedList<type>::deleteFront() {
	if (head) {
		Node<type>* node = head;
		head = head->getNext();
		delete node;
	}
}


template<class type>
void LinkedList<type>::deleteEnd() {
	if (head) {
		if (head->getNext() == nullptr) {
			delete head;
			head = nullptr;
		}
		else {
			Node<type>* node = head;
			while (node->getNext()->getNext()) {
				node = node->getNext();
			}
			Node<type>* temp = node->getNext();
			node->setNext(nullptr);
			delete temp;
		}
	}
}


template<class type>
void LinkedList<type>::deletePosition(int position) {
	int count = 1;
	Node<type>* node = head;
	while (count != position) {
		node = node->getNext();
		count++;
	}
	if (node == head) {
		head = head->getNext();
		delete node;
	}
	else {
		Node<type>* temp = head;
		while (temp->getNext() != node) {
			temp = temp->getNext();
		}
		node = temp->getNext();
		temp->setNext(node->getNext());
		delete node;
	}
}


template<class type>
type LinkedList<type>::getItem(int position) {
	Node<type>* node = head;
	int count = 1;
	while (count != position) {
		node = node->getNext();
		count++;
	}
	return node->getData();
}


template<class type>
int LinkedList<type>::getSize(){
	int size = 0;
	Node<type>* node = head;
	while(node != NULL){
		size++;
		node = node->getNext();
	}
	return size;
}

#endif