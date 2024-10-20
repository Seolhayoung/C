#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n,int r){
	if(r>n)
		return 0;
	else
		return(factorial(n)/(factorial(n-r)*factorial(r)));
}


int factorial(int a){
	int i;
	int result=1;   //initialization 
	for(i=1;i<=a;i++)
		result=result*i;
	return result;
}


int get_integer(int x){
	printf("Enter the value: ");
	scanf("%d",&x);
	return x;
}


int main(void) {
	int n,r;
	
	n=get_integer(n); // get_integer(n) 값을 n에 저장 
	r=get_integer(r);
	
	int final_result=combination(n,r);
	 
	printf("The result of C(%d,%d) is %d.",n,r,final_result);
	 
	return 0;
}
