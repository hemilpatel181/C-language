#include<stdio.h>
#include<conio.h>

void main(){
	int b, h;
	float area;
	clrscr();

	printf("Enter Base And Height Of triangle : ");
	scanf("%d %d", &b, &h);

	area = 0.5 * b * h;

	printf("Area Of traingle : %.2f", area);

	getch();
}