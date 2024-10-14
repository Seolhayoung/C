#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2;
	char c;
	
	printf("Enter the calculation: ");
	scanf("%d %c %d",&num1,&c,&num2);
	
	switch(c){
		case'+':
	    printf("%d %c %d = %d",num1,c,num2,num1+num2);
		break;
		
		case'-':
		printf("%d %c %d = %d",num1,c,num2,num1-num2);
		break;
		
		case'*':
		printf("%d %c %d = %d",num1,c,num2,num1*num2);
		break;
		
		case'/':
		printf("%d %c %d = %d",num1,c,num2,num1/num2);
		break;
		
		case'%':
		printf("%d %c %d = %d",num1,c,num2,num1%num2);
		break;
		
		default:
			printf("Wrong operater.");
			break;
		}
	return 0;
}
