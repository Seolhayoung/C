#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	FILE* fp=NULL;
	int c;
	
	fp = fopen("C:/Cuniv/C/week11/Project6/sample.txt","r");
	
	if(fp==NULL)
		printf("cannot open file\n");
		
	// �� ���ھ� �о�ͼ� ���
	/* 
	while((c=fgetc(fp))!=EOF)
		printf("%c",c);
		
	fclose(fp);
	*/
	
	// �� �ܾ �о�ͼ� ��� 
	char range[100];
	while(fgets(range,100,fp)!=NULL)
		printf("%s",range);
		
	fclose(fp);
	
	return 0;
}
