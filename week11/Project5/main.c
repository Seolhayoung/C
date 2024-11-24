#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(void) {
	int i;
	FILE *fp;
	
	fp=fopen("C:/Cuniv/C/week11/Project5/sample.txt","w");
	
	char str[100];
	
	for(i=0;i<3;i++){
	
		printf("input a word: ");
		scanf("%s",&str);
	
	fprintf(fp,"%s\n",str);
	
	}
	
	
	fclose(fp);
	
}
