#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 10


void quickSort(int* list, int p, int r);
int partition(int* list, int p, int r);
void swap(int* a, int* b);
int* generateList(int n);
void printList(int* l, int n);


int main(void) {
  srand(time(NULL));

  int* myList = generateList(N);
  // int myList[] = {3, 7, 8, 2, 1};
  printList(myList, N);

  std::cout << "sorting.." << std::endl;
  quickSort(myList, 0, N);
  printList(myList, N);

  delete myList;
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

void quickSort(int* list, int p, int r) {
  if (p < r) {
    int q = partition(list, p, r);
    // std::cout << "q = " << q << std::endl;
    quickSort(list, p, q - 1);
    quickSort(list, q + 1, r);
  }
}

int partition(int* list, int p, int r) {
  r--;
  int x = list[r];
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (list[j] <= x) {
      i++;
      // std::cout << "swapping " << list[i] << " and " << list[j] << std::endl;
      swap(&list[i], &list[j]);
      // printList(list, r+1);
    }
  }
  swap(&list[i + 1], &list[r]);
  // std::cout << "returning" << std::endl;
  return i + 1;
}

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}