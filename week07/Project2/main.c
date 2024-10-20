#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b){
	int output;
	output=a+b;
	return output;
}

int square(int n){
	return(n*n);
}

int get_max(int x,int y){
	if(x>y)
	return x;
	
	else if(x<y)
	return y;
	
	else
	return x;
}


int main(void) {
	int num1,num2;
	
	printf("Enter the integers: ");
	scanf("%d %d",&num1,&num2);
	
	printf("Result - Sum: %d, Square: %d, Max: %d",sumTwo(num1,num2),square(num1),get_max(num1,num2));
	
	return 0;
}
