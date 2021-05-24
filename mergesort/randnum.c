#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include"randnum.h"

int randnum()
{
	int i=0,j=0;
	FILE *fp = NULL;
	
	fp = fopen("number.txt", "w+");
	for(i=0; i<1000000; i++)
	{
		j= rand();
		fprintf(fp, "%d\n", j);
	}
	fclose(fp);

	return 0;
}


