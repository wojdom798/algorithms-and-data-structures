#include <iostream>
#include "linked_list.hpp"

using namespace std;

int main(void) {

  LinkedList<int> ll = LinkedList<int>(90);

  cout << ll.toString() << endl;
  cout << "size: " << ll.length() << endl << endl;

  ll.add(21);
  cout << ll.toString() << endl;
  cout << "size: " << ll.length() << endl << endl;

  ll.add(23);
  cout << ll.toString() << endl;
  cout << "size: " << ll.length() << endl << endl;

  ll.add(52);
  cout << ll.toString() << endl;
  cout << "size: " << ll.length() << endl << endl;

  return 0;
}