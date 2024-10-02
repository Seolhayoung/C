#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int year;
	printf("Input the year: ");
	scanf("%d",&year);
	
	if((year%4==0 && year%100!=0)||year%400==0){
		printf("Is the %d the leap year? 1",year);
	}
	else{
		printf("Is the %d the leap year? 0",year);
	}
	
	return 0;
}
