#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "node.hpp"
#include <iostream>
using namespace std;

template <class T>
class LinkedList {
  private:
    Node<T>* head;
    Node<T>* tail;
    int size;
    
  public:
    LinkedList();
    LinkedList(T data);
    ~LinkedList();
    int length(void);
    void add(T item);
    void print(void);
};

template <class T>
LinkedList<T>::LinkedList() {
  head = NULL;
  tail = NULL;
  size = 0;
}

template <class T>
LinkedList<T>::LinkedList(T data) {
  head = new Node<T>(data);
  tail = head;
  size = 1;
}

template <class T>
LinkedList<T>::~LinkedList() {
  delete this->head;
}

template <class T>
int LinkedList<T>::length(void) {
  return this->size;
}

template <class T>
void LinkedList<T>::add(T item) {
  if (this->size == 0) {
    this->head = new Node<T>(item);
    tail = head;
    this->size = 1;
  } else if (this->size == 1) {
    // cout << "size is 1, adding: " << item << endl;
    Node<T>* tmp = new Node<T>(item);
    this->tail = tmp;
    this->head->setNext(tmp);
    this->size++;
  } else {
    // cout << "size is > 1, adding: " << item << endl;
    Node<T>* tmp = new Node<T>(item);
    this->tail->setNext(tmp);
    this->tail = tmp;
    this->size++;
  }
}

template <class T>
void LinkedList<T>::print(void) {
  Node<T>* tmp = this->head;
  int i = 1;
  cout << "[ ";
  while (tmp != NULL) {
    cout << tmp->getData();
    if (i < this->size) {
      cout << ", ";
    }
    tmp = tmp->getNext();
    i++;
  }
  cout << " ]" << endl;
}

#endif