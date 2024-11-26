#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i;
	int grade[5];
	int sum=0;
	float average;
	
	for(i=0;i<5;i++){
		printf("Input value - grade[%i]=",i);
		scanf("%d",&grade[i]);
	}
	
	
	for(i=0;i<5;i++){
		printf("grade[%i]=%d\n",i,grade[i]);
		sum+=grade[i];
	}
	
	average=(float)sum/5;
	
	printf("average: %.2f",average);
	
	return 0;
}
