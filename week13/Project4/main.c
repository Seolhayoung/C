#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*

// 구조체 변수 자체를 매개변수로 넘김
 
struct point {
	int x;
	int y;
};   // 좌표를 나타내는 구조체 정의 

int getArea (struct point p1, struct point p2) { // 넓이 구하는 함수 
	
	int width, height;
	
	if(p1.x > p2.x)
		width = p1.x - p2.x;
	
	else
		width = p2.x - p1.x;
		
		
	if(p1.y > p2.y)
		height = p1.y - p2.y;
	
	else
		height = p2.y - p1.y;
		
	
	return width * height;
}

int main(int argc, char *argv[]) {
	
	int area; 
	struct point p1, p2;
	
	printf("Input the coordinate p1 (x y): ");
	scanf("%d %d",&p1.x, &p1.y);
	
	printf("Input the coordinate p2 (x y): ");
	scanf("%d %d",&p2.x, &p2.y);
	
	area = getArea (p1, p2);
	
	printf("Area: %d",area);
	
	return 0;
}
*/


// 구조체 포인터를 넘김
 
struct point {
	int x;
	int y;
}; 

int getArea (struct point *pPtr1, struct point *pPtr2) {
	
	int width, height;
	
	if(pPtr1->x > pPtr2->x)
		width = pPtr1->x - pPtr2->x;
		
	else
		width = pPtr2->x - pPtr1->x;
		
		
	if(pPtr1->y > pPtr2->y)
		height = pPtr1->y - pPtr2->y;
		
	else
		height = pPtr2->y - pPtr1->y;
		
		
	return width * height;
	
}

int main(int argc, char *argv[]) {
	
	int area;
	
	struct point p1, p2;
	struct point *pPtr1 = &p1, *pPtr2 = &p2;
	
	printf("Input the coordinate p1 (x y): ");
	scanf("%d %d",&p1.x, &p1.y);
	
	printf("Input the coordinate p2 (x y): ");
	scanf("%d %d",&p2.x, &p2.y);
	
	area = getArea (pPtr1, pPtr2);
	
	printf("Area: %d",area);
	
	return 0;
}
