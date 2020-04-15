#ifndef NODE_HPP
#define NODE_HPP

template <class T>
class Node {
  private:
    T data;
    Node<T>* next;

  public:
    Node(T data);
    ~Node();
    T getData(void);
    Node<T>* getNext(void);
    void setNext(Node<T>* next);
};

template <class T>
Node<T>::Node(T data) {
  this->data = data;
  next = NULL;
}

template <class T>
Node<T>::~Node() {
  if (this->next != NULL) {
    delete this->next;
  }
}

template <class T>
T Node<T>::getData(void) {
  return this->data;
}

template <class T>
Node<T>* Node<T>::getNext(void) {
  return this->next;
}

template <class T>
void Node<T>::setNext(Node<T>* next) {
  this->next = next;
}

#endif