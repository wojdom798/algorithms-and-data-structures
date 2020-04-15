#ifndef NODE_HPP
#define NODE_HPP

template <class T>
class Node {
  private:
    T data;
    Node<T>* next;

  public:
    Node(T data) {
      this->data = data;
      next = NULL;
    }

    T getData(void) {
      return this->data;
    }

};

#endif