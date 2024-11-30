#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID;
	char name[10];
	double grade;
};


void main(void) {
	
	struct student s1;
	s1.ID=24;
	strcpy(s1.name,"Hayoung");
	s1.grade=4.3;
	
	printf("ID: ");
	scanf("%d",&s1.ID);
	
	printf("name: ");
	scanf("%s",&s1.name);
	
	printf("grade: ");
	scanf("%lf",&s1.grade);
	
	
	printf("ID: %d\n",s1.ID);
	printf("name: %s\n",s1.name);
	printf("grade: %lf\n",s1.grade);
	
}
