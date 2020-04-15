#include <iostream>
#include "linked_list.hpp"

using namespace std;

int main(void) {

  LinkedList<int> ll = LinkedList<int>(90);

  ll.print();

  return 0;
}