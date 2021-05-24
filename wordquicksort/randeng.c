#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int randeng()
{
	int i=0,j=0;
	char word[101];
	FILE *fp = NULL;

	fp = fopen("words.txt", "w+");
	for(i=0; i<1000000; i++)
	{
		for(int k=0; k<100; k++)
		{
			j = rand()%26;
			word[k] = j + 97;
		}
		word[101] = '\0';
		fprintf(fp, "%s\n", word);
	}
	return 0;
}
