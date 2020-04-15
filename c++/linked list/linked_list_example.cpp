#include <iostream>
#include "linked_list.hpp"

using namespace std;

int main(void) {

  LinkedList<int> ll = LinkedList<int>(90);

  ll.print();
  cout << "size: " << ll.length() << endl << endl;

  ll.add(21);
  ll.print();
  cout << "size: " << ll.length() << endl << endl;

  ll.add(23);
  ll.print();
  cout << "size: " << ll.length() << endl << endl;

  ll.add(52);
  ll.print();
  cout << "size: " << ll.length() << endl << endl;

  return 0;
}