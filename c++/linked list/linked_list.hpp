#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "node.hpp"
#include <iostream>
using namespace std;

template <class T>
class LinkedList {
  private:
    Node<T>* head;
    
  public:
    LinkedList(T data) {
      head = new Node<T>(data);
    }

    void print(void) {
      cout << this->head->getData() << endl;
    }

};

#endif