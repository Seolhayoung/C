#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sec1;
	
	printf("Input the second: ");
	scanf("%d",&sec1);
	
	int min, sec2;
	min=sec1/60;
	sec2=sec1%60;
	
	
	printf("The time is %d : %d",min,sec2);
	return 0;
}
