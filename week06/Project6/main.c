#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input,num,answer=5;
	
	do{
	printf("Guess a number: ");
	scanf("%d",&input);
	
	if(input>answer){
		printf("Low!\n");
	}
	if(input<answer){
		printf("High!\n");
	}
	
	num++;
	}
	
	while((input>answer)||(input<answer));
	printf("Congratulation! Trials: %d",num);

	return 0;
}
