#include<stdio.h>
#include<stdlib.h>
#include"quicksort.h"
#include"randeng.h"

int main()
{

 FILE *fin, *fout;

 char **n = (char**)malloc(1000000*sizeof(char*));
 //先配置1000000個指標 (n[])

for(int i=0; i<1000000; i++) {
    
 n[i] = (char*)malloc(101*sizeof(char));

}
//再對每個指標配置101個char大小的空間(n[][])

 randeng();

 fin=fopen("words.txt","rt");

 if(fin==NULL) {

   printf("Fail To Open File words.txt!!");

   return 0;

 }

 fout=fopen("sortwords.txt","w+t");

 if(fout==NULL) {

   printf("Fail To Open File sortwords.txt!!");

   fclose(fin);

   return 0;

 }
 
for(int i=0; i<1000000; i++)
{

 fscanf(fin,"%s",n[i]);

}
 quicksort(n, 0, 999999);

for(int i=0; i<1000000; i++)
{

 fprintf(fout,"%s\n",n[i]);

}

 fclose(fin);

 fclose(fout);

 for(int i=0; i<1000000; i++){

 free(n[i]);

}

 free(n);
 
return 0;
}
