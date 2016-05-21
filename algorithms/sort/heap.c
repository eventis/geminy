#include <stdio.h>

int main (){
}


void heapSort(int numbers[], int array_size) {
  int i, temp;
 
  for (i = (array_size / 2); i >= 0; i--) {
    siftDown(numbers, i, array_size - 1);
  }
 
  for (i = array_size-1; i >= 1; i--) {
    // Swap
    temp = numbers[0];
    numbers[0] = numbers[i];
    numbers[i] = temp;
 
    siftDown(numbers, 0, i-1);
  }
}
 
void siftDown(int numbers[], int root, int bottom) {
  int maxChild = root * 2 + 1;
 
  // Find the biggest child
  if(maxChild < bottom) {
    int otherChild = maxChild + 1;
    // Reversed for stability
    maxChild = (numbers[otherChild] > numbers[maxChild])?otherChild:maxChild;
  } else {
    // Don't overflow
    if(maxChild > bottom) return;
  }
 
  // If we have the correct ordering, we are done.
  if(numbers[root] >= numbers[maxChild]) return;
 
  // Swap
  int temp = numbers[root];
  numbers[root] = numbers[maxChild];
  numbers[maxChild] = temp;
 
  // Tail queue recursion. Will be compiled as a loop with correct compiler switches.
  siftDown(numbers, maxChild, bottom);
}
