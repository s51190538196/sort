#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 
#include <time.h>
#include"partition.h"

int partition(char **words, int left, int right) { 
    int i = left - 1; 
    int j;
    char temp[100];
    for(j = left; j < right; j++) { 
        if(strcmp(words[j],words[right]) < 0 || strcmp(words[j],words[right]) == 0) { 
            i++; 
            strcpy(temp,words[j]);
	    strcpy(words[j],words[i]);
	    strcpy(words[i],temp);
        } 
    }
    strcpy(temp,words[right]); 
    strcpy(words[right],words[i+1]);
    strcpy(words[i+1],temp);
 
    return i+1; 
} 
