#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*void square(int a){
	a=a*a;
}


int main() {
	int a=2;
	
	square(a);
	printf("a=%i\n",a);
	
	return 0;
} */
 // return 값이 없는 void 사용했기 때문에 2가 출력됨
 
 int square(int a){
 	return(a*a);
 } 
 
 int main(){
 	int a=2;
 	
	a=square(a);
	printf("a=%i\n",a);
 }
 // int는 return 값을 가지므로 4가 출력됨
  
