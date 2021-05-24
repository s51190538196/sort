#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include"quicksort.h"
#include"partition.h"

void quicksort(char **words, int left, int right) { 
    if(left < right) { 
        int q = partition(words, left, right); 
        quicksort(words, left, q-1); 
        quicksort(words, q+1, right); 
    } 
} 
