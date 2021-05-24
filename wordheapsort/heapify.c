#include<stdio.h>
#include<string.h>
#include"heapify.h"
#include"swap.h"

void heapify(char **arr, int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && strcmp(arr[left] , arr[largest]) > 0)
      largest = left;
  
    if (right < n && strcmp(arr[right] , arr[largest]) > 0)
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(arr[i], arr[largest]);
      heapify(arr, n, largest);
    }
}
