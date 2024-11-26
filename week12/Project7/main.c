#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *proverb="All that glisters is not gold.";

void setPointer(char **q){
	*q=proverb;  // change the address that the pointer points to
}


int main(void) {
	
	char *p="zzz";
	setPointer(&p);  // forward the address of the pointer
	printf("%s \n",p);  // print changed values
	return 0;
}
