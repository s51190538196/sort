#include<stdio.h>
#include<stdlib.h>
#include"mergesort.h"
#include"randnum.h"
#include<sys/time.h>

int main()
{
 struct timeval start;
 struct timeval end;
 unsigned long diff;

 FILE *fin, *fout;

 int *n = (int*)malloc(1000000*sizeof(int));

 randnum();

 fin=fopen("number.txt","rt");

 if(fin==NULL) {

   printf("Fail To Open File number.txt!!");

   return 0;

 }

 fout=fopen("sortnumber.txt","w+t");

 if(fout==NULL) {

   printf("Fail To Open File sortnumber.txt!!");

   fclose(fin);

   return 0;

 }
 
for(int i=0; i<1000000; i++)
{

 fscanf(fin,"%d",&n[i]);

}
 gettimeofday(&start,NULL);

 mergesort(n, 0, 999999);
 
 gettimeofday(&end,NULL);

 diff = 1000000* (end.tv_sec-start.tv_sec)+ end.tv_usec-start.tv_usec;

 printf("the time is %ld\n", diff);

for(int i=0; i<1000000; i++)
{

 fprintf(fout,"%d\n",n[i]);

}

 fclose(fin);

 fclose(fout);
 
 free(n);

return 0;

}
