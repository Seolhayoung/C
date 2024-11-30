#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID;
	int score;
};


void main(void) {
	
	int i;
	float avg;
	int H_ID;
	int H_score;
	
	struct student s[STUDENTNUM];
	
	for(i=0;i<STUDENTNUM;i++){
		
		printf("Input the ID: ");
		scanf("%d",&s[i].ID);
		
		printf("Input the score: ");
		scanf("%d",&s[i].score);
		
		avg+=s[i].score;
	}
	
	avg=avg/STUDENTNUM;
	
	for(i=0;i<STUDENTNUM;i++){
		if(s[i].score > H_score){
			
			H_score = s[i].score;
			H_ID = s[i].ID;
			
		}
	}	
	
	
	printf("The average of the score: %f\n",avg);
	printf("The highest score - ID: %d, score: %d",H_ID,H_score);
}
