#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 20

int* generateList(int n);
void printList(int* l, int n);

int main(void) {
  srand(time(NULL));

  int* myList = generateList(N);
  printList(myList, N);

  return 0;
}

int* generateList(int n) {
  int* list = new int[n];
  for (int i = 0; i < n; i++) {
    list[i] = rand() % 100;
  }
  return list;
}

void printList(int* l, int n) {
  int i;
    std::cout << "[";
    for (i = 0; i < n - 1; i++) {
      std::cout << l[i] << ", ";
    }
    std::cout << l[i] << "]" << std::endl;;
}