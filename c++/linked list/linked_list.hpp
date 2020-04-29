#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "node.hpp"
#include <iostream>
#include <string>

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
    std::string toString(void);
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
std::string LinkedList<T>::toString(void) {
  std::string s = "[ ";
  Node<T>* tmp = this->head;
  int i = 1;
  while (tmp != NULL) {
    s += std::to_string(tmp->getData());
    if (i < this->size) {
      s += ", ";
    }
    tmp = tmp->getNext();
    i++;
  }
  s += " ]";
  return s;
}


#endif