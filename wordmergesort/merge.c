#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"merge.h"

void merge(char **arr, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	char **L = (char**)malloc(n1*sizeof(char*));
	for(int a=0; a<n1; a++)
	{
		L[a] = (char*)malloc(101*sizeof(char));
	}
	char **R = (char**)malloc(n1*sizeof(char*));
	for(int a=0; a<n2; a++)
	{
		R[a] = (char*)malloc(101*sizeof(char));
	}

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		strcpy(L[i] , arr[l + i]);
	for (j = 0; j < n2; j++)
		strcpy(R[j] , arr[m + 1 + j]);

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (strcmp(L[i], R[j])<0 || strcmp(L[i], R[j])==0) {
			strcpy(arr[k] , L[i]);
			i++;
		}
		else {
			strcpy(arr[k] , R[j]);
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		strcpy(arr[k] , L[i]);
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		strcpy(arr[k] , R[j]);
		j++;
		k++;
	}
}
